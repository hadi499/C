#include <stdio.h>
#include <string.h>

void main()
{

    char title[] = "Belajar Bahasa C";
    char title_copy[20];

    // copy string title ke title_copy
    strcpy(title_copy, title);

    // maka sekarang title_copy akan berisi:
    printf("isi title_copy: %s\n", title_copy);
}