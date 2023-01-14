#include <stdio.h>
#include <string.h>

void encrypt(char *plaintext, char *key) {
    int i, j;
    int len = strlen(plaintext);
    int key_len = strlen(key);
    char ciphertext[len];
    for (i = 0, j = 0; i < len; i++, j++) {
        if (j == key_len) {
            j = 0;
        }
        ciphertext[i] = (plaintext[i] + key[j]) % 26 + 'A';
    }
    ciphertext[len] = '\0';
    printf("Ciphertext: %s\n", ciphertext);
}

void decrypt(char *ciphertext, char *key) {
    int i, j;
    int len = strlen(ciphertext);
    int key_len = strlen(key);
    char plaintext[len];
    for (i = 0, j = 0; i < len; i++, j++) {
        if (j == key_len) {
            j = 0;
        }
        plaintext[i] = (ciphertext[i] - key[j] + 26) % 26 + 'A';
    }
    plaintext[len] = '\0';
    printf("Decrypted Text: %s\n", plaintext);
}

int main() {
    char plaintext[100], key[30];

    printf("Enter plaintext: ");
    scanf("%s", plaintext);
    printf("Enter key: ");
    scanf("%s", key);

    encrypt(plaintext, key);
    decrypt(plaintext, key);

    return 0;
}
