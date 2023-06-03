/* Check whether given input string is keyword or not */
%{
#include <stdio.h>
#include <string.h>
%}

%%
"int"|"float"|"char"|"void"|"if"|"else"|"while"   { printf("%s is a keyword\n", yytext); }
.                                                 { printf("Not a keyword\n"); }
%%

int main() {
    printf("Enter an input string:");
    yylex();
    return 0;
}

