#include <stdio.h>
#include <math.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int power(int base, int exp, int mod) {
    int res = 1;
    while (exp > 0) {
        if (exp & 1) {
            res = (res * base) % mod;
        }
        base = (base * base) % mod;
        exp >>= 1;
    }
    return res;
}

void primitive_roots(int n) {
    int phi = n - 1;
    int flag = 0;
    for (int i = 2; i <= phi; i++) {
        if (gcd(i, n) == 1) {
            flag = 1;
            int temp = phi;
            for (int j = 2; j < phi; j++) {
                if (power(i, j, n) == 1) {
                    temp = j;
                    break;
                }
            }
            if (temp == phi) {
                printf("%d ", i);
            }
        }
    }
    if(!flag){
        printf("No primitive root found for %d",n);
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Primitive roots of %d are: ",n);
    primitive_roots(n);
    printf("\n");
    return 0;
}
