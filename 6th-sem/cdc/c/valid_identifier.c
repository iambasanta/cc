#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool isValidIdentifierChar(char c) {
    return (isalnum(c) || c == '_');
}

bool isValidIdentifier(const char *str) {
    if (strlen(str) == 0 || isdigit(str[0])) {
        return false;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (!isValidIdentifierChar(str[i])) {
            return false;
        }
    }

    return true;
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    scanf("%s", inputString);

    if (isValidIdentifier(inputString)) {
        printf("'%s' is a valid identifier.\n", inputString);
    } else {
        printf("'%s' is not a valid identifier.\n", inputString);
    }

    return 0;
}
