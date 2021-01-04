#include <stdio.h>
#include <string.h>

void main()
{

    char nama[] = "Ahmad Muhardian";
    char gelar[] = ", S.Kom";

    // Menggabungkan string
    strcat(nama, gelar);

    printf("Nama lengkap: %s\n", nama);
}