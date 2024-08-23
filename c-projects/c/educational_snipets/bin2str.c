#include <stdio.h>
#include <stdlib.h>


char* bin2str(unsigned value, char* buffer)
{
    // This algorithm is not the fastest one, but is relativelly simple.
    //
    // A faster algorithm would be conversion octets to strings by a lookup table.
    // There is only 2**8 == 256 octets, therefore we would need only 2048 bytes
    // for the lookup table. Conversion of a 64-bit integers would need 8 lookups
    // instead 64 and/or/shifts of bits etc. Even more... lookups may be implemented
    // with XLAT or similar CPU instruction... and AVX/SSE gives chance for SIMD.

    const unsigned N_DIGITS = sizeof(unsigned) * 8;
    unsigned mask = 1 << (N_DIGITS - 1);
    char* ptr = buffer;

    for (int i = 0; i < N_DIGITS; i++)
    {
        *ptr++ = '0' + !!(value & mask);
        mask >>= 1;
    }
    *ptr = '\0';

    // Remove leading zeros.
    for (ptr = buffer; *ptr == '0'; ptr++);

    return ptr;
}
