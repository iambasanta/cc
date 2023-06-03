/* Lex program to check whether input is digit or not. */
%{
#include<stdio.h>
#include<stdlib.h>
%}
/* Rule Section */
%%
^[0-9]* printf("DIGIT");
^[^0-9]|[0-9]*[a-zA-Z] printf("NOT A DIGIT");
. ;
%%
int main()
{
	yylex();
    return 0;
}

/*
EXAMPLE:
   dfa
   NOT A DIGIT
   69
   DIGIT
   ^C
*/
