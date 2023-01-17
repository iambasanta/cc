#include <stdio.h>

unsigned int seed = 1234;
unsigned int a = 1103515245;
unsigned int c = 12345;
unsigned int m = (unsigned int)1 << 31;

unsigned int lcg(unsigned int seed) {
    return (a * seed + c) % m;
}

int main() {
    for(int i = 0; i < 10; i++) {
        seed = lcg(seed);
        printf("Random number: %u\n", seed);
    }

    printf("\n");
    printf("BASANTA_23473@SIMULATION_LAB_PRIME");
    printf("\n");

    return 0;
}
