#include <stdio.h>

int inverse(int num, int mod) {
    for (int i = 0; i < mod; i++) {
        if ((num * i) % mod == 1) {
            return i;
        }
    }
    return 0;
}

int main() {
    int num, mod;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the modulo: ");
    scanf("%d", &mod);
    int result = inverse(num, mod);
    if (result)
        printf("The additive inverse of %d in mod %d is %d\n", num, mod, result);
    else
        printf("%d has no additive inverse in mod %d\n", num, mod);
    return 0;
}
