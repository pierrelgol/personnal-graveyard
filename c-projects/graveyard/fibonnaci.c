#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long long unsigned int fibonnaci_recursive(long long unsigned int nb) {
    if (nb <= 1)
        return (nb);
    return (fibonnaci_recursive(nb - 1) + fibonnaci_recursive(nb - 2));
}

long long unsigned int fibonnaci_iterative(long long unsigned int nb) {
    long long unsigned int prev_fib;
    long long unsigned int curr_fib;
    long long unsigned int result;

    result = prev_fib = 1;
    while (nb > 2) {
        nb -= 1;
        curr_fib = prev_fib;
        prev_fib = result;
        result = prev_fib + curr_fib;
    }
    return (result);
}


int main(int argc, char **argv) {

    if (argc == 2)
    {
        clock_t start, end;
        int i = atoi(argv[1]);
        double cpu_time_used1 = 0;
        double cpu_time_used2 = 0;

        start = clock();
        fibonnaci_recursive(i);
        end = clock();
        cpu_time_used1 += ((double) (end - start)) / CLOCKS_PER_SEC;

        start = clock();
        fibonnaci_iterative(i);
        end = clock();
        cpu_time_used2 += ((double) (end - start)) / CLOCKS_PER_SEC;
        printf("fibonnaci_recursive() took %lf seconds to execute \n",cpu_time_used1);
        printf("fibonnaci_iterative() took %lf seconds to execute \n",cpu_time_used2);
    }

    return (0);
}
