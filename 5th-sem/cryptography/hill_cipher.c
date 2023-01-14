#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void encrypt(char *plaintext, int key[2][2]) {
    int i, j;
    int len = strlen(plaintext);
    char ciphertext[len + 1];
    int temp[2];
    for (i = 0; i < len; i += 2) {
        for (j = 0; j < 2; j++) {
            temp[j] = (plaintext[i + j] - 'A') % 26;
        }
        for (j = 0; j < 2; j++) {
            ciphertext[i + j] = (key[0][j] * temp[0] + key[1][j] * temp[1]) % 26 + 'A';
        }
    }
    ciphertext[len] = '\0';
    printf("Ciphertext: %s\n", ciphertext);
}

void decrypt(char *ciphertext, int key[2][2]) {
    int i, j;
    int len = strlen(ciphertext);
    char plaintext[len + 1];
    int temp[2];
    int det = key[0][0] * key[1][1] - key[0][1] * key[1][0];
    int inv_det = (int) fmod(pow(det, 26 - 2), 26);
    int inv_key[2][2] = {{(key[1][1] * inv_det) % 26, (-1 * key[0][1] * inv_det) % 26},
        {(-1 * key[1][0] * inv_det) % 26, (key[0][0] * inv_det) % 26}};
    for (i = 0; i < len; i += 2) {
        for (j = 0; j < 2; j++) {
            temp[j] = (ciphertext[i + j] - 'A') % 26;
        }
        for (j = 0; j < 2; j++) {
            plaintext[i + j] = (inv_key[0][j] * temp[0] + inv_key[1][j] * temp[1]) % 26 + 'A';
        }
    }
    plaintext[len] = '\0';
    printf("Decrypted Text: %s\n", plaintext);
}

int main() {
    int key[2][2];
    char plaintext[100];
    printf("Enter the 2x2 key matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &key[i][j]);
        }
    }
    printf("Enter the plaintext: ");
    scanf("%s", plaintext);
    encrypt(plaintext, key);
    printf("Enter the ciphertext: ");
    scanf("%s", plaintext);
    decrypt(plaintext, key);
    return 0;
}
