#include <stdio.h>

int count_operators(char *expression) {
    int count = 0;
    for (int i = 0; expression[i] != '\0'; i++) {
        if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/') {
            count++;
        }
    }
    return count;
}

int main() {
    char expression[100];
    printf("Enter an expression: ");
    fgets(expression, 100, stdin);

    int count = count_operators(expression);
    printf("The number of operators in the expression is %d\n", count);

    return 0;
}
