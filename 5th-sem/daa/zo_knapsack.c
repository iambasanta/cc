#include <stdio.h>
#include <stdlib.h>

struct Item {
    int id;         // item id
    int weight;     // item weight
    int value;      // item value
};

int compare(const void *a, const void *b) {
    double r1 = ((struct Item *)b)->value / (double)((struct Item *)b)->weight;
    double r2 = ((struct Item *)a)->value / (double)((struct Item *)a)->weight;
    return r1 > r2 ? 1 : -1;
}

void fractionalKnapsack(struct Item items[], int n, int capacity) {
    // Sort items in decreasing order of value per unit weight
    qsort(items, n, sizeof(struct Item), compare);

    double totalValue = 0.0;
    int i;
    for (i = 0; i < n; i++) {
        if (items[i].weight <= capacity) {
            // If the entire item can be included, add it to the knapsack
            totalValue += items[i].value;
            capacity -= items[i].weight;
        } else {
            // Otherwise, add a fraction of the item to the knapsack
            double fraction = (double)capacity / (double)items[i].weight;
            totalValue += items[i].value * fraction;
            capacity = 0;
            break;
        }
    }

    printf("Maximum knapsack value: %0.2lf\n", totalValue);
}

int main() {
    struct Item items[] = {{1, 10, 60}, {2, 20, 100}, {3, 30, 120}};
    int n = sizeof(items) / sizeof(items[0]);
    int capacity = 50;
    fractionalKnapsack(items, n, capacity);

    printf("Name : Basanta Rai\n");
    printf("Symbol No. : 23473\n");
    return 0;
}
