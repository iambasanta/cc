/* count the number of operator used in given input */
%{
#include <stdio.h>
#include <string.h>
int operatorCount = 0;
%}

%%
[+\-*/=]     { operatorCount++; }
.            { /* Ignore other characters */ }
%%

int main() {
    char input[100];
    printf("Enter an input string:\n");
    fgets(input, sizeof(input), stdin);
    yy_scan_string(input);
    yylex();

    printf("Number of operators: %d\n", operatorCount);

    return 0;
}

