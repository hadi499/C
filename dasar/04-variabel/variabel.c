#include <stdio.h>

int main()
{
    int usia = 19;
    float berat = 65.3;
    double tinggi = 178.43;
    char jenis_kelamin = 'L';

    printf("Usia: %i tahun\n", usia);
    printf("Tinggi: %.2f cm\n", tinggi);
    printf("Berat: %.2f Kg\n", berat);
    printf("Jenis kelamin: %c\n", jenis_kelamin);

    return 0;
}
/**
Tipe Data	Ukuran	    Panjang	                    
char	    1 byte	    -128 — 127 atau 0 — 255	    
int	        2 byte	    -32,768 — 32,767 atau 
                        -2,147,483,648 — 2,147,483,647	
float   	4 byte	    1.2E-38 — 3.4E+38	
double	    8 byte	    2.3E-308 — 1.7E+308	
**/