#include <stdio.h>
#include <math.h>

int discrete_log(int n, int g, int p) {
    int m = ceil(sqrt(p));
    int h = 1;
    for (int i = 0; i < m; i++) {
        h = (h * g) % p;
    }
    int table[m];
    table[0] = n;
    for (int i = 1; i < m; i++) {
        table[i] = (table[i - 1] * g) % p;
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (table[j] == h) {
                return i * m + j;
            }
        }
        h = (h * g) % p;
    }
    return -1;
}

int main() {
    int n, g, p;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of g: ");
    scanf("%d", &g);
    printf("Enter the value of p: ");
    scanf("%d", &p);
    int result = discrete_log(n, g, p);
    if (result == -1) {
        printf("No discrete log solution found\n");
    } else {
        printf("The discrete log of %d with base %d mod %d is %d\n", n, g, p, result);
    }
    return 0;
}
