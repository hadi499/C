#include <stdio.h>
#include <string.h>

void main()
{

    char str1[] = "Petani";
    char str2[] = "Petani";
    int hasil;

    // membandingkan string
    hasil = strcmp(str1, str2);

    if (hasil == 0)
    {
        printf("str1 dan str2 sama");
    }
    else
    {
        printf("str1 dan str2 berbeda");
    }
}