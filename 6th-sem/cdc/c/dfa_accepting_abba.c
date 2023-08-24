#include <stdio.h>

int transition(int state, char input) {
    if (state == 0 && input == 'a') return 1;
    if (state == 1 && input == 'b') return 2;
    if (state == 2 && input == 'b') return 3;
    if (state == 3 && input == 'a') return 4;
    return -1; 
}

int main() {
    int currentState = 0;
    char inputString[] = "abba";

    for (int i = 0; inputString[i] != '\0'; i++) {
        currentState = transition(currentState, inputString[i]);

        if (currentState == -1) {
            printf("String is not accepted.\n");
            return 0;
        }
    }

    if (currentState == 4) {
        printf("String is accepted.\n");
    } else {
        printf("String is not accepted.\n");
    }

    return 0;
}
