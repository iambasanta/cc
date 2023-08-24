#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

const char *keywords[] = {
    "int", "float", "char", "if", "else", "while", "for", "return"
};

int numKeywords = sizeof(keywords) / sizeof(keywords[0]);

bool isInteger(const char *input) {
    for (int i = 0; i < strlen(input); i++) {
        if(!isdigit(input[i])) {
            return false;
        }
    }
    return true;
}

bool isIdentifier(const char *str) {
    if (!isalpha(str[0]) && str[0] != '_') {
        return false;
    }
    for (int i = 1; str[i] != '\0'; i++) {
        if (!isalnum(str[i]) && str[i] != '_') {
            return false;
        }
    }
    return true;
}

bool isKeyword(const char *str) {
    for (int i = 0; i < numKeywords; i++) {
        if (strcmp(str, keywords[i]) == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    char input[100];
    const char delimiters[] = " \t\n";
    
    printf("Enter input: ");
    fgets(input, sizeof(input), stdin);
    
    char *token = strtok(input, delimiters);
    
    while (token != NULL) {
        if (isInteger(token)) {
            printf("Integer: %s\n", token);
        } else if (isIdentifier(token)) {
            if (isKeyword(token)) {
                printf("Keyword: %s\n", token);
            } else {
                printf("Identifier: %s\n", token);
            }
        } else {
            printf("Operator or unknown: %s\n", token);
        }
        token = strtok(NULL, delimiters);
    }
    
    return 0;
}
