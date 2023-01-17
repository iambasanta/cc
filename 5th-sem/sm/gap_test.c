#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gap_test(unsigned int *data, int n, int k) {
    int run_count = 0;
    int current_run = 1;
    double chi_square = 0;
    int expected_count = n / (k + 1);

    for (int i = 1; i < n; i++) {
        if (data[i] == data[i - 1]) {
            current_run++;
        } else {
            if (current_run >= k) {
                run_count++;
            }
            current_run = 1;
        }
    }
    if (current_run >= k) {
        run_count++;
    }
    chi_square = (run_count - expected_count) * (run_count - expected_count) / (double)expected_count;
    printf("Gap Test Chi-square: %f\n", chi_square);
}

int main() {
    srand(time(0));
    unsigned int data[100];
    for (int i = 0; i < 100; i++) {
        data[i] = rand();
    }
    gap_test(data, 100, 2);

    printf("\n");
    printf("BASANTA_23473@SIMULATION_LAB_PRIME");
    printf("\n");

    return 0;
}
