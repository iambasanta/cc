#include <stdio.h>
#include <math.h>

double chi_square_test(int *observed, int *expected, int n) {
    double chi_square = 0;
    for (int i = 0; i < n; i++) {
        chi_square += (observed[i] - expected[i]) * (observed[i] - expected[i]) / (double)expected[i];
    }
    return chi_square;
}

int main() {
    int observed[] = {12, 9, 14, 11, 10};
    int expected[] = {10, 10, 10, 10, 10};
    int n = sizeof(observed) / sizeof(observed[0]);
    double chi_square_result = chi_square_test(observed, expected, n);
    printf("Chi-square Test Result: %f\n", chi_square_result);

    printf("\n");
    printf("BASANTA_23473@SIMULATION_LAB_PRIME");
    printf("\n");
    return 0;
}
