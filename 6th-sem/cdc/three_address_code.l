/* Write a flex program to generate three address code */
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
%}

%%
[0-9]+         { printf("t%d = %s\n", yylineno, yytext); }
[-+*/]         { printf("t%d = t%d %s t%d\n", yylineno, yylineno-2, yytext, yylineno-1); }
\n             { /* Ignore newline character */ }
.              { printf("Invalid input\n"); exit(1); }
%%

int main() {
    printf("Enter an arithmetic expression:\n");
    yylex();
    return 0;
}

/*
EXAMPLE
    Enter an arithmetic expression:
    3*4*5
    t1 = 3
    t1 = t-1 * t0
    t1 = 4
    t1 = t-1 * t0
    t1 = 5
    ^C
*/
