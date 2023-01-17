#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void autocorrelation_test(unsigned int *data, int n, int lag) {
    double mean = 0;
    double variance = 0;
    double autocorrelation = 0;

    for (int i = 0; i < n; i++) {
        mean += data[i];
    }
    mean /= n;

    for (int i = 0; i < n; i++) {
        variance += (data[i] - mean) * (data[i] - mean);
    }
    variance /= n;

    for (int i = 0; i < n - lag; i++) {
        autocorrelation += (data[i] - mean) * (data[i + lag] - mean);
    }
    autocorrelation /= (n - lag) * variance;

    printf("Autocorrelation Test Result: %f\n", autocorrelation);
}

int main() {
    srand(time(0));
    unsigned int data[100];
    for (int i = 0; i < 100; i++) {
        data[i] = rand();
    }
    autocorrelation_test(data, 100, 2);

    printf("\n");
    printf("BASANTA_23473@SIMULATION_LAB_PRIME");
    printf("\n");
    return 0;
}
