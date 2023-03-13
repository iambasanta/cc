#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encrypt(char message[], int key);
void decrypt(char message[], int key);

int main()
{
    char message[100];
    int key, choice;

    printf("Enter the message to encrypt or decrypt (max 100 characters) : ");
    fgets(message, 100, stdin);

    printf("Enter the key (positive integer) : ");
    scanf("%d", &key);

    printf("---OPERATIONS---\n");
    printf("1. Encrypt \n2. Decrypt\n");
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

void encrypt(char message[], int key)
{
    int i;
    char ch;

    for (i = 0; message[i] != '\0'; i++) {
        ch = message[i];

        if (ch >= 'a' && ch <= 'z') {
            ch = 'a' + ((ch - 'a' + key) % 26);
        } else if (ch >= 'A' && ch <= 'Z') {
            ch = 'A' + ((ch - 'A' + key) % 26);
        }

        message[i] = ch;
    }
}

void decrypt(char message[], int key)
{
    int i;
    char ch;

    for (i = 0; message[i] != '\0'; i++) {
        ch = message[i];

        if (ch >= 'a' && ch <= 'z') {
            ch = 'a' + ((ch - 'a' - key + 26) % 26);
        } else if (ch >= 'A' && ch <= 'Z') {
            ch = 'A' + ((ch - 'A' - key + 26) % 26);
        }

        message[i] = ch;
    }
}

