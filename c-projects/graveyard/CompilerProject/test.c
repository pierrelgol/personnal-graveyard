// #include <unistd.h>
#include <stdint.h>

typedef union {
    double f64;
    uint64_t u64;
} conversion;

#define EXPMASK (((uint64_t) 1 << 52) - 1)
#define DECMASK	(((uint64_t) UINT64_MAX << 52))

void put_nbr2(uint64_t test, int count) {
    if (count == 0)
        return;
    put_nbr2(test / 2, count - 1);
    write(1, &"0123456789"[test % 2], 1);
}

int main(void) {
    conversion demo;

    demo.f64 = 1.5;
    put_nbr2(demo.u64, 64);
    write(1, "\n", 1);
    write(1, "\n", 1);
    put_nbr2(DECMASK, 64);
    write(1, "\n", 1);
    put_nbr2((demo.u64 & DECMASK), 64);
    write(1, "\n", 1);
    put_nbr2(EXPMASK, 64);
    write(1, "\n", 1);
    put_nbr2((demo.u64 & EXPMASK), 64);
    write(1, "\n", 1);

    return 0;
}
