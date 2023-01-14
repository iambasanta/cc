#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    int result = gcd(a, b);
    if (result == 1) {
        printf("%d and %d are relatively prime\n", a, b);
    } else {
        printf("%d and %d are not relatively prime\n", a, b);
    }
    return 0;
}
