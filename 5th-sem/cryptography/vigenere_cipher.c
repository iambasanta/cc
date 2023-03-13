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
    char plaintext[100],ciphertext[100],key[30];
    int operation;
    printf("Enter key: ");
    scanf("%s", key);

    printf("---OPERATIONS---\n");
    printf("1. Encryption\n");
    printf("2. Decryption\n");
    printf("Choose an operation :: ");
    scanf("%d", &operation);

    if(operation == 1){
        printf("Enter plaintext: ");
        scanf("%s", plaintext);
        encrypt(plaintext, key);
    }else if (operation == 2) {
        printf("Enter ciphertext: ");
        scanf("%s", ciphertext);
        decrypt(ciphertext, key);
    }else {
        printf("Invalid choice.");
    }

    return 0;
}
