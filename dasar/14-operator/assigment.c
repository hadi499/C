#include <stdio.h>

int main(void)
{
    int a, b, c, d, e;
    a = 5;
    b = 3;
    b = b + 1;
    c = a + b;
    d = c + c + a;
    e = (c + d) * a;

    printf("Isi variabel a: %d \n", a);
    printf("Isi variabel b: %d \n", b);
    printf("Isi variabel c: %d \n", c);
    printf("Isi variabel d: %d \n", d);
    printf("Isi variabel e: %d \n", e);

    return 0;
}