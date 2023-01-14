#include <stdio.h>
#include <string.h>

void encrypt(char plaintext[], int key) {
    for (int i = 0; i < strlen(plaintext); i++) {
        if (plaintext[i] >= 'a' && plaintext[i] <= 'z') {
            plaintext[i] = ((plaintext[i] - 'a') + key) % 26 + 'a';
        }
        else if (plaintext[i] >= 'A' && plaintext[i] <= 'Z') {
            plaintext[i] = ((plaintext[i] - 'A') + key) % 26 + 'A';
        }
    }
}

void decrypt(char ciphertext[], int key) {
    for (int i = 0; i < strlen(ciphertext); i++) {
        if (ciphertext[i] >= 'a' && ciphertext[i] <= 'z') {
            ciphertext[i] = ((ciphertext[i] - 'a') - key + 26) % 26 + 'a';
        }
        else if (ciphertext[i] >= 'A' && ciphertext[i] <= 'Z') {
            ciphertext[i] = ((ciphertext[i] - 'A') - key + 26) % 26 + 'A';
        }
    }
}

int main() {
    int key;
    char plaintext[100];
    printf("Enter key: ");
    scanf("%d", &key);
    printf("Enter plaintext: ");
    scanf("%s", plaintext);
    encrypt(plaintext, key);
    printf("Ciphertext: %s\n", plaintext);
    decrypt(plaintext, key);
    printf("Plaintext: %s\n", plaintext);
    return 0;
}
