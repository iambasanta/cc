#include <stdio.h>
#include <string.h>

char rail[20][20];

void encrypt(char *plaintext, int rails) {
    int i, j, k = 0, row = 0, col = 0;
    int len = strlen(plaintext);
    for (i = 0; i < rails; i++) {
        for (j = 0; j < len; j++) {
            if (row == i) {
                rail[row][col++] = plaintext[k++];
            } else {
                row++;
                j--;
            }
            if (row == rails) {
                row = rails - 2;
                if (row == i) {
                    row--;
                }
            }
        }
        row = 0;
        col = 0;
    }
    printf("Ciphertext: ");
    for (i = 0; i < rails; i++) {
        for (j = 0; j < len; j++) {
            if (rail[i][j] != 0) {
                printf("%c", rail[i][j]);
            }
        }
    }
    printf("\n");
}

void decrypt(int rails) {
    int i, j, row = 0, col = 0, k = 0;
    int len = 0;
    for (i = 0; i < rails; i++) {
        for (j = 0; j < 20; j++) {
            if (rail[i][j] != 0) {
                len++;
            }
        }
    }
    char plaintext[len];
    for (i = 0; i < rails; i++) {
        for (j = 0; j < len; j++) {
            if (row == i) {
                plaintext[k++] = rail[row][col++];
            } else {
                row++;
                j--;
            }
            if (row == rails) {
                row = rails - 2;
                if (row == i) {
                    row--;
                }
            }
        }
        row = 0;
        col = 0;
    }
    plaintext[len] = '\0';
    printf("Decrypted Text: %s\n", plaintext);
}

int main() {
    char plaintext[20];
    int rails;

    printf("Enter plaintext: ");
    scanf("%s", plaintext);
    printf("Enter number of rails: ");
    scanf("%d", &rails);

    encrypt(plaintext, rails);
    decrypt(rails);

    return 0;
}

