#include <stdio.h>

void main()
{

    // membuat array kosong
    int nilai[5];

    // mengisi array
    nilai[0] = 32;
    nilai[1] = 42;
    nilai[2] = 76;
    nilai[3] = 31;
    nilai[4] = 57;

    // mencetak isi array dengan perulangan
    int length = sizeof(nilai) / sizeof(*nilai);
    for (int i = 0; i < length; i++)
    {
        printf("Nilai ke-%d: %d\n", i + 1, nilai[i]);
    }
}