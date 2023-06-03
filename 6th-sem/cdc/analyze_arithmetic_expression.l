/* program to analyze arithmetic expression */
%{
#include <stdio.h>
#include <string.h>
%}

%%
"int"|"float"|"char"|"void"   { printf("Keyword: %s\n", yytext); }
[a-zA-Z][a-zA-Z0-9]*          { printf("Identifier: %s\n", yytext); }
[0-9]+                        { printf("Numeric Literal: %s\n", yytext); }
"="                           { printf("Assignment Operator\n"); }
";"                           { printf("Semicolon\n"); }
[ \t]                         { /* Ignore space and tab characters */ }
\n                            { /* Ignore newline characters */ }
.                             { printf("Invalid input\n"); }
%%

int main() {
    printf("Enter an input string:\n");
    yylex();
    return 0;
}
