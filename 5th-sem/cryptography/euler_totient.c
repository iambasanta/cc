#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int phi(int n) {
    int result = n;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                n = n / i;
            }
            result = result - result / i;
        }
    }
    if (n > 1) {
        result = result - result / n;
    }
    return result;
}

int main() {
    int n;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    printf("The Totient value of %d is %d\n", n, phi(n));
    return 0;
}
