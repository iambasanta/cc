#include <stdio.h>
#include <string.h>

void generateKeyMatrix(char *key, int keyMatrix[5][5]) {
    int i, j, k;
    int len = strlen(key);
    int flag = 0;
    char matrix[26];
    for (i = 0; i < len; i++) {
        if (key[i] == 'I' || key[i] == 'J') {
            key[i] = 'I';
        }
        for (j = 0; j < i; j++) {
            if (key[i] == key[j]) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            matrix[i] = key[i];
        }
        flag = 0;
    }
    k = i;
    for (i = 'A'; i <= 'Z'; i++) {
        if (i == 'I') {
            continue;
        }
        for (j = 0; j < k; j++) {
            if (i == matrix[j]) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            matrix[k] = i;
            k++;
        }
        flag = 0;
    }
    k = 0;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            keyMatrix[i][j] = matrix[k] - 'A';
            k++;
        }
    }
}

void encrypt(char *plaintext, int keyMatrix[5][5]) {
    int i, j, k, l;
    int len = strlen(plaintext);
    char ciphertext[len + 1];
    if (len % 2 == 1) {
        plaintext[len] = 'X';
        plaintext[len + 1] = '\0';
    }
    for (i = 0; i < len; i += 2) {
        if (plaintext[i] == plaintext[i + 1]) {
            plaintext[i + 1] = 'X';
        }
        for (j = 0; j < 5; j++) {
            for (k = 0; k < 5; k++) {
                if (keyMatrix[j][k] == (plaintext[i] - 'A')) {
                    l = j;
                    j = k;
                    k = l;
                    break;
                }
            }
        }
        for (l = 0; l < 5; l++) {
            if (keyMatrix[j][l] == (plaintext[i + 1] - 'A')) {
                ciphertext[i] = j + 'A';
                ciphertext[i + 1] = l + 'A';
                break;
            }
        }
    }
    ciphertext[len] = '\0';
    printf("Ciphertext: %s\n", ciphertext);
}

void decrypt(char *ciphertext, int keyMatrix[5][5]) {
    int i, j, k, l;
    int len = strlen(ciphertext);
    char plaintext[len + 1];
    for (i = 0; i < len; i += 2) {
        for (j = 0; j < 5; j++) {
            if (keyMatrix[j][0] == (ciphertext[i] - 'A')) {
                k = j;
                break;
            }
        }
        for (l = 0; l < 5; l++) {
            if (keyMatrix[l][1] == (ciphertext[i + 1] - 'A')) {
                j = l;
                break;
            }
        }
        plaintext[i] = k + 'A';
        plaintext[i + 1] = j + 'A';
    }
    plaintext[len] = '\0';
    printf("Decrypted Text: %s\n", plaintext);
}

int main() {
    int keyMatrix[5][5];
    char plaintext[100];
    char key[100];
    printf("Enter the key: ");
    scanf("%s", key);
    generateKeyMatrix(key, keyMatrix);
    printf("Key Matrix: \n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%c ", keyMatrix[i][j] + 'A');
        }
        printf("\n");
    }
    printf("Enter the plaintext: ");
    scanf("%s", plaintext);
    encrypt(plaintext, keyMatrix);
    printf("Enter the ciphertext: ");
    scanf("%s", plaintext);
    decrypt(plaintext, keyMatrix);
    return 0;
}
