#include <stdio.h>
#include <string.h>

void main()
{

    char nama[] = "Petani Kode";
    char huruf = 'e';
    char *hasil;

    printf("Mencari huruf '%c' dalam nama...\n", huruf);
    // mencari huruf
    hasil = strchr(nama, huruf);

    while (hasil != NULL)
    {
        printf("Ditemukan pada huruf ke-%d\n", hasil - nama + 1);
        hasil = strchr(hasil + 1, huruf);
    }
}