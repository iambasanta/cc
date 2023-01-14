#include <stdio.h>

void extended_euclidean(int a, int b, int *x, int *y) {
    int x_last = 1, y_last = 0;
    int q, r, temp;
    while (b != 0) {
        q = a / b;
        r = a % b;
        temp = x_last;
        x_last = *x - q * x_last;
        *x = temp;
        temp = y_last;
        y_last = *y - q * y_last;
        *y = temp;
        a = b;
        b = r;
    }
}

int main() {
    int num, mod, x, y;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the modulo: ");
    scanf("%d", &mod);
   
    extended_euclidean(num, mod, &x, &y);
    if (x < 0) {
        x = (x % mod + mod) % mod;
    }
    if (x == 0) {
        printf("%d has no multiplicative inverse in mod %d\n", num, mod);
    } else {
        printf("The multiplicative inverse of %d in mod %d is %d\n", num, mod, x);
    }
    return 0;
}
