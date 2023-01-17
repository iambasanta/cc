#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int x = 0, y = 0;
    int steps = 0;
    srand(time(0));

    for (int i = 0; i < 100; i++) {
        int random_direction = rand() % 4;
        if (random_direction == 0) {
            x++;
        } else if (random_direction == 1) {
            x--;
        } else if (random_direction == 2) {
            y++;
        } else {
            y--;
        }
        steps++;
    }

    printf("Final position: (%d, %d)\n", x, y);
    printf("Steps taken: %d\n", steps);

    printf("\n");
    printf("BASANTA_23473@SIMULATION_LAB_PRIME");
    printf("\n");

    return 0;
}
