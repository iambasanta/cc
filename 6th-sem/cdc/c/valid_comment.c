#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValidComment(const char *str) {
    int length = strlen(str);

    if (length < 2) {
        return false; // Comment must be at least 2 characters (// or /*)
    }

    if (str[0] == '/' && str[1] == '/') {
        return true; // Line comment
    }

    if (length < 4 || str[0] != '/' || str[1] != '*') {
        return false; // Comment must start with /*
    }

    if (str[length - 2] != '*' || str[length - 1] != '/') {
        return false; // Comment must end with */
    }

    return true;
}

int main() {
    char inputString[100];  // Adjust the array size as needed

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0'; // Remove newline if present

    if (isValidComment(inputString)) {
        printf("'%s' is a valid C comment.\n", inputString);
    } else {
        printf("'%s' is not a valid C comment.\n", inputString);
    }

    return 0;
}
