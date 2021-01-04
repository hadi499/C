#include <stdio.h>

int main(void)
{
    int a, b, hasil;

    a = 181;
    b = 108;

    printf("=== Operator Bitwise Bahasa C === \n\n");

    //and
    hasil = a & b;
    printf("a & b: %d \n", hasil);

    /* or */
    hasil = a | b;
    printf("a | b: %d \n", hasil);

    // xor
    hasil = a ^ b;
    printf("a ^ b: %d \n", hasil);

    // not
    hasil = ~a;
    printf("~a: %d \n", hasil);

    //left shift
    hasil = a >> 1;
    printf("a >> 1: %d \n", hasil);

    // right shift
    hasil = b << 2;
    printf("b << 2: %d \n", hasil);
    return 0;
}