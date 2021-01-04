#include <stdio.h>

int main(void)
{
    int a;

    a = 0 && 1;
    printf("Isi variabel a: %d \n", a);

    a = 1 && 1;
    printf("Isi variabel a: %d \n", a);

    a = 0 || 1;
    printf("Isi variabel a: %d \n", a);

    a = 0 || 0;
    printf("Isi variabel a: %d \n", a);

    a = !0;
    printf("Isi variabel a: %d \n", a);

    return 0;
}
