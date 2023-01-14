#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int power(int base, int exp, int mod) {
    int result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp = exp / 2;
    }
    return result;
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int miller_rabin(int n) {
    if (n <= 1) {
        return 0;
    }
    if (n <= 3) {
        return 1;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return 0;
    }
    int k = 0;
    int m = n - 1;
    while (m % 2 == 0) {
        m = m / 2;
        k++;
    }
    int a, x;
    for (int i = 0; i < 5; i++) {
        a = rand() % (n - 3) + 2;
        x = power(a, m, n);
        if (x == 1 || x == n - 1) {
            continue;
        }
        for (int j = 0; j < k - 1; j++) {
            x = (x * x) % n;
            if (x == n - 1) {
                break;
            }
        }
        if (x != n - 1) {
            return 0;
        }
    }
    return 1;
}

int main() {
    srand(time(0));
    int n;
    printf("Enter a number to test for primality: ");
    scanf("%d", &n);
    if (miller_rabin(n)) {
        printf("%d is a prime number\n", n);
    } else {
        printf("%d is not a prime number\n", n);
    }
    return 0;
}
