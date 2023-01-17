#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_CUSTOMERS 100
#define N_SERVERS 4
#define ARRIVAL_RATE 2
#define SERVICE_TIME 2
#define SIMULATION_TIME 100

void queuing_system_simulation() {
    int n_customers = N_CUSTOMERS;
    int n_servers = N_SERVERS;
    int arrival_rate = ARRIVAL_RATE;
    int service_time = SERVICE_TIME;
    int simulation_time = SIMULATION_TIME;

    int customers_in_system = 0;
    int customers_in_queue = 0;
    int customers_served = 0;
    int time_spent_in_system = 0;
    int time_spent_in_queue = 0;

    int current_time = 0;
    int next_arrival_time = 0;
    int next_departure_time = 0;
    int servers_available = n_servers;

    srand(time(0));
    for (current_time = 0; current_time < simulation_time; current_time++) {
        // Arrival event
        if (current_time == next_arrival_time) {
            customers_in_system++;
            if (servers_available == 0) {
                customers_in_queue++;
            } else {
                servers_available--;
                next_departure_time = current_time + service_time;
            }
            next_arrival_time = current_time + 1 + rand() % arrival_rate;
        }
        // Departure event
        if (current_time == next_departure_time) {
            customers_in_system--;
            customers_served++;
            if (customers_in_queue > 0) {
                customers_in_queue--;
                next_departure_time = current_time + service_time;
            } else {
                servers_available++;
            }
        }
        time_spent_in_system += customers_in_system;
        time_spent_in_queue += customers_in_queue;
    }
    printf("Customers served: %d\n", customers_served);
    printf("Average time spent in system: %f\n", (double)time_spent_in_system / customers_served);
    printf("Average time spent in queue: %f\n", (double)time_spent_in_queue / customers_served);
    printf("Server utilization: %f\n", (double)customers_served / (current_time * n_servers));

}

int main() {
    queuing_system_simulation();

    printf("\n");
    printf("BASANTA_23473@SIMULATION_LAB_PRIME");
    printf("\n");
    return 0;
}

