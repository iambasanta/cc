#include <stdio.h>

void extended_euclidean(int a, int b) {
    int x = 1, y = 0;
    int x_last = 0, y_last = 1;
    int q, r, temp;
    printf("a\tb\tx\ty\n");
    printf("%d\t%d\t%d\t%d\n", a, b, x, y);
    while (b != 0) {
        q = a / b;
        r = a % b;
        temp = x;
        x = x_last - q * x;
        x_last = temp;
        temp = y;
        y = y_last - q * y;
        y_last = temp;
        a = b;
        b = r;
        printf("%d\t%d\t%d\t%d\n", a, b, x, y);
    }
    printf("\nGCD of %d and %d is %d\n", a, b, a);
    printf("Coefficients x, y are: %d, %d", x_last, y_last);
    printf("\n");
}

int main() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    extended_euclidean(a, b);
    return 0;
}
