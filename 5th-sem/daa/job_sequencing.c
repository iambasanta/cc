#include <stdio.h>
#include <stdlib.h>

struct Job {
    int id;         // job id
    int deadline;   // job deadline
    int profit;     // job profit
};

int compare(const void *a, const void *b) {
    return ((struct Job *)b)->profit - ((struct Job *)a)->profit;
}

void jobSequencing(struct Job jobs[], int n) {
    // Sort jobs in decreasing order of profit
    qsort(jobs, n, sizeof(struct Job), compare);
    
    int maxDeadline = 0;
    for (int i = 0; i < n; i++) {
        if (jobs[i].deadline > maxDeadline) {
            maxDeadline = jobs[i].deadline;
        }
    }
    
    int slots[maxDeadline];     // array to store job slots
    for (int i = 0; i < maxDeadline; i++) {
        slots[i] = -1;
    }
    
    int totalProfit = 0;
    int numJobs = 0;
    for (int i = 0; i < n; i++) {
        int deadline = jobs[i].deadline;
        // find a slot before the deadline for the current job
        while (deadline > 0 && slots[deadline - 1] != -1) {
            deadline--;
        }
        // if a slot is found, assign the job to the slot
        if (deadline > 0) {
            slots[deadline - 1] = i;
            totalProfit += jobs[i].profit;
            numJobs++;
        }
    }
    
    printf("Maximum profit: %d\n", totalProfit);
    printf("Number of jobs: %d\n", numJobs);
    printf("Maximum profit sequence of jobs : ");
    for (int i = 0; i < maxDeadline; i++) {
        if (slots[i] != -1) {
            printf("%d ", jobs[slots[i]].id);
        }
    }
    printf("\n");
}

int main() {
    struct Job jobs[] = {{1, 4, 20}, {2, 1, 10}, {3, 1, 40}, {4, 1, 30}};
    int n = sizeof(jobs) / sizeof(jobs[0]);
    jobSequencing(jobs, n);

    printf("Name : Basanta Rai\n");
    printf("Symbol No. : 23473\n");
    return 0;
}

