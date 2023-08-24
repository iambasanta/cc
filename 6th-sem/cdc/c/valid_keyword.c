#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Array of C keywords
const char *keywords[] = {
    "break", "case", "char", "const", "continue", "default", "do",
    "double", "else", "enum", "extern", "float", "for", "goto", "if",
    "int", "long", "return", "sizeof", "struct", "switch", "typedef", "void", "while"
};

bool isKeyword(const char *str) {
    int numKeywords = sizeof(keywords) / sizeof(keywords[0]);

    for (int i = 0; i < numKeywords; i++) {
        if (strcmp(str, keywords[i]) == 0) {
            return true;
        }
    }

    return false;
}

int main() {
    char inputString[50]; 

    printf("Enter a string: ");
    scanf("%s", inputString);

    if (isKeyword(inputString)) {
        printf("'%s' is a C keyword.\n", inputString);
    } else {
        printf("'%s' is not a C keyword.\n", inputString);
    }

    return 0;
}
