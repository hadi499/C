#include <stdio.h>

double hitungLuasSegitiga(int alas, int tinggi)
{
    return (alas * tinggi) / 2.0;
}

int main(void)
{
    double a = hitungLuasSegitiga(5, 7) * 2;
    printf("% .2f \n", a);

    printf("Luas segitiga adalah: %.2f \n", hitungLuasSegitiga(5, 7));

    return 0;
}