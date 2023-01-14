#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int modulo(int a, int b, int mod) {
    int res = 1;
    while (b > 0) {
        if (b & 1) {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

int main() {
    int p, g, a, b;
    printf("Enter a prime number: ");
    scanf("%d", &p);

    printf("Enter a primitive root of %d: ", p);
    scanf("%d", &g);

    printf("Enter a private key for Alice: ");
    scanf("%d", &a);

    printf("Enter a private key for Bob: ");
    scanf("%d", &b);

    int A = modulo(g, a, p);
    int B = modulo(g, b, p);
    int keyA = modulo(B, a, p);
    int keyB = modulo(A, b, p);

    printf("Shared secret key for Alice: %d\n", keyA);
    printf("Shared secret key for Bob: %d\n", keyB);
    return 0;
}
