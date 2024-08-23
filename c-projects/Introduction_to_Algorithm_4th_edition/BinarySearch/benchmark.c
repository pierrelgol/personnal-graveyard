#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <assert.h>
#include "BinarySearch.h"

#define MIN_SIZE 10000000
#define MAX_SIZE 100000000
#define STEP_SIZE 10000000
#define NUM_TRIALS 1

void generateSortedList(Data_t *list, size_t size);
void benchmark(Data_t *list, size_t size);

int main(void) {
    for (size_t size = MIN_SIZE; size <= MAX_SIZE; size += STEP_SIZE) {
        printf("Benchmarking size %zu:\n", size);
        Data_t *list = (Data_t *)malloc(sizeof(Data_t) * size);
        for (int trial = 0; trial < NUM_TRIALS; ++trial) {
            generateSortedList(list, size);
            benchmark(list, size);
        }
        free(list);
    }
    return 0;
}

void generateSortedList(Data_t *list, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        list[i] = i + i;
    }
}

void benchmark(Data_t *list, size_t size) {
    clock_t start, end;
    Data_t random_index = ((int)(rand() % size - 1));
    Data_t test_value = list[random_index];
    Data_t return_index = 0;
    start = clock();
    return_index = BinarySearch(list,test_value,size);
    assert(list[return_index] == list[random_index]);
    end = clock();

    double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Trial completed in %f seconds value to find : %lld, index of the value : %lld\n", cpu_time_used,test_value, return_index);
}
