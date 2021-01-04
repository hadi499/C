#include <stdio.h>

void hitungLuasSegitiga()
{
    double alas = 5;
    double tinggi = 7;
    double luas = (alas * tinggi) / 2;

    printf("Luas segitiga adalah: %.2f \n", luas);
}

int main(void)
{
    hitungLuasSegitiga();

    return 0;
}