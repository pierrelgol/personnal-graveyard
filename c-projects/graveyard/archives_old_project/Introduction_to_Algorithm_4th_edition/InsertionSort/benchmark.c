#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "InsertionSort.h"

#define MIN_SIZE 10000
#define MAX_SIZE 10000
#define STEP_SIZE 10000
#define NUM_TRIALS 1

void generateRandomList(Data_t *list, size_t size);
void benchmark(Data_t *list, size_t size);

int main(void) {
    for (size_t size = MIN_SIZE; size <= MAX_SIZE; size += STEP_SIZE) {
        printf("Benchmarking size %zu:\n", size);
        Data_t *list = (Data_t *)malloc(sizeof(Data_t) * size);
        for (int trial = 0; trial < NUM_TRIALS; ++trial) {
            generateRandomList(list, size);
            benchmark(list, size);
        }
        free(list);
    }
    return 0;
}

void generateRandomList(Data_t *list, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        list[i] = (Data_t) (rand() % size);
    }
}

void benchmark(Data_t *list, size_t size) {
    clock_t start, end;
    Order order = increasing;

    start = clock();
    InsertionSort(list, &size, &order);
    end = clock();

    double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Trial completed in %f seconds\n", cpu_time_used);
}
