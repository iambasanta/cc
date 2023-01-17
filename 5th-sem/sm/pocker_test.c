#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void poker_test(unsigned int *data, int n) {
    int poker_hands[16] = {0};
    int expected_count = n / 16;
    double chi_square = 0;

    for (int i = 0; i < n; i++) {
        poker_hands[data[i] & 0xF]++;
    }

    for (int i = 0; i < 16; i++) {
        int observed_count = poker_hands[i];
        chi_square += (observed_count - expected_count) * (observed_count - expected_count) / (double)expected_count;
    }

    printf("Poker Test Chi-square: %f\n", chi_square);
}

int main() {
    srand(time(0));
    unsigned int data[100];
    for (int i = 0; i < 100; i++) {
        data[i] = rand();
    }
    poker_test(data, 100);

    printf("\n");
    printf("BASANTA_23473@SIMULATION_LAB_PRIME");
    printf("\n");

    return 0;
}
