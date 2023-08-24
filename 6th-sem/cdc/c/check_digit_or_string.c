#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isDigit(const char *input) {
    for (int i = 0; i < strlen(input); i++) {
        if(!isdigit(input[i])) {
            return false;
        }
    }
    return true;
}

int main() {
    char input[100];
    printf("Enter number: ");
    scanf("%s", input);

    if(isDigit(input)) {
        printf("Input is a digit\n");
    } else {
        printf("Input is a string\n");
    }
}
