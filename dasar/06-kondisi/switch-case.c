#include <stdio.h>
#include <ctype.h>

void main()
{

    char grade;

    printf("Inputkan grade: ");
    scanf("%c", &grade);

    switch (toupper(grade)) //menginputkan huruf kecil dan huruf besar ok
    {
    case 'A':
        printf("Luar biasa!\n");
        break;
    case 'B':
    case 'C':
        printf("Bagus!\n");
        break;
    case 'D':
        printf("Anda lulus\n");
        break;
    case 'E':
    case 'F':
        printf("Anda remidi\n");
        break;
    default:
        printf("Grade Salah!\n");
    }
}