#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

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
    int p, q, n, phi, e, d, message;
    printf("Enter two prime numbers: ");
    scanf("%d%d", &p, &q);
    n = p * q;
    phi = (p - 1) * (q - 1);

    for (e = 2; e < phi; e++) {
        if (gcd(e, phi) == 1) {
            break;
        }
    }

    for (d = 2; d < phi; d++) {
        if ((e * d) % phi == 1) {
            break;
        }
    }

    printf("Enter the message: ");
    scanf("%d", &message);

    int cipher = modulo(message, e, n);
    printf("Encrypted message: %d\n", cipher);

    int decrypted = modulo(cipher, d, n);
    printf("Decrypted message: %d\n", decrypted);
    return 0;
}

