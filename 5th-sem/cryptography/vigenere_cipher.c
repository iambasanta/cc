#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encrypt(char message[], char key[]);
void decrypt(char message[], char key[]);

int main()
{
    char message[100], key[100];
    int choice;

    printf("Enter the message to encrypt or decrypt (max 100 characters) : ");
    fgets(message, 100, stdin);

    printf("Enter the key (max 100 characters) : ");
    fgets(key, 100, stdin);

    printf("---OPERATIONS---\n");
    printf("1. Encrypt\n2. Decrypt\n");
    printf("Choose operation : ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            encrypt(message, key);
            printf("Encrypted message: %s\n", message);
            break;
        case 2:
            decrypt(message, key);
            printf("Decrypted message: %s\n", message);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}

void encrypt(char message[], char key[])
{
    int i, j, k;
    char ch;

    for (i = 0, j = 0; message[i] != '\0'; i++) {
        ch = message[i];

        if (ch >= 'a' && ch <= 'z') {
            k = key[j] - 'a';
            ch = 'a' + ((ch - 'a' + k) % 26);
            j = (j + 1) % strlen(key);
        } else if (ch >= 'A' && ch <= 'Z') {
            k = key[j] - 'A';
            ch = 'A' + ((ch - 'A' + k) % 26);
            j = (j + 1) % strlen(key);
        }

        message[i] = ch;
    }
}

void decrypt(char message[], char key[])
{
    int i, j, k;
    char ch;

    for (i = 0, j = 0; message[i] != '\0'; i++) {
        ch = message[i];

        if (ch >= 'a' && ch <= 'z') {
            k = key[j] - 'a';
            ch = 'a' + ((ch - 'a' - k + 26) % 26);
            j = (j + 1) % strlen(key);
        } else if (ch >= 'A' && ch <= 'Z') {
            k = key[j] - 'A';
            ch = 'A' + ((ch - 'A' - k + 26) % 26);
            j = (j + 1) % strlen(key);
        }

        message[i] = ch;
    }
}
