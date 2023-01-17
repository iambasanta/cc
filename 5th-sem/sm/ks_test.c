#include <stdio.h>
#include <math.h>

double ks_test(double *data, int n, double(*cdf)(double)) {
    double d_max = 0;
    for (int i = 0; i < n; i++) {
        double d = fabs(cdf(data[i]) - (i + 1) / (double)n);
        if (d > d_max) {
            d_max = d;
        }
    }
    return d_max;
}

double cdf(double x) {
    // Example cumulative distribution function
    return x * x;
}

int main() {
    double data[] = {0.2, 0.3, 0.5, 0.8, 0.9};
    int n = sizeof(data) / sizeof(data[0]);
    double ks_test_result = ks_test(data, n, cdf);
    printf("KS Test Result: %f\n", ks_test_result);

    printf("\n");
    printf("BASANTA_23473@SIMULATION_LAB_PRIME");
    printf("\n");

    return 0;
}
