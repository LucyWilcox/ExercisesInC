/*  Code for Think OS.

Copyright 2016 Allen B. Downey
License: MIT License https://opensource.org/licenses/MIT
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

union FloatIntUnion {
    float f;
    uint32_t i;
} b;

/* Get the exponent part of a float.
*/
uint32_t get_exponent(float x) {
    b.f = x;
    uint32_t mask = 0xff;
    uint32_t expon = (b.i >> 23) & mask;
    return expon;
}

/* Divide a float by a power of two.
*/
float div_by_pow_2(float x, int n)
{
    // uint32_t exp = get_exponent(x);
    // printf("e %d\n", exp);

    // printf("f %d\n", b.f);
    // uint32_t
    // printf("%d\n", b.i);
    // uint32_t coef_mask = 
    b.f = x;
    // b.i = exp;
    unsigned int sign = (b.i >> 31) & 1;
    unsigned int exp = (b.i >>  23) & 0xff;

    unsigned int coef_mask = (1 << 23) - 1;
    unsigned int coef = b.i & coef_mask;
    printf("%d\n", sign);
    printf("%d\n", exp);
    printf("%d\n", coef);
    exp = (exp >> 1);

    // x = (x >> 1);
    // TODO: fill this in
    // return x;
    return coef^exp;
}

void main() {
    float y = div_by_pow_2(4.82, 1);
    printf("%f\n", y);
}
