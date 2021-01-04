#include <stdio.h>

void sapaTeman(char nama[])
{
    printf("Hai %s \n", nama);
}
void sapaTeman2(char nama1[], char nama2[])
{
    printf("Hai %s dan %s \n", nama1, nama2);
}

int main(void)
{
    sapaTeman("Lisa");
    sapaTeman2("Lisa", "Nova");

    return 0;
}
