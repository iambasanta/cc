/* Lex program to check whether input is digit or not. */
%{
#include<stdio.h>
#include<stdlib.h>
%}

/* Rule Section */
%%
^[0-9]*       { printf("DIGIT\n"); }
^[^0-9]|[0-9]*[a-zA-Z]    { printf("NOT A DIGIT\n"); }
.             { /* Ignore other characters */ }
%%

int main()
{
    char input[100];
    int choice;

    do {
        printf("Enter a string:\n");
        fgets(input, sizeof(input), stdin);
        yy_scan_string(input);
        yylex();

        printf("Do you want to continue? (1: Yes, 0: No): ");
        scanf("%d", &choice);
        getchar();

    } while (choice != 0);

    return 0;
}

/*
EXAMPLE:
    Enter a string:
    69
    DIGIT

    Do you want to continue? (1: Yes, 0: No): 1
    Enter a string:
    asf
    NOT A DIGIT

    Do you want to continue? (1: Yes, 0: No): 1
    Enter a string:
    69s
    NOT A DIGIT

    Do you want to continue? (1: Yes, 0: No): 0
*/
