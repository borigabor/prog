#include <stdio.h>
#include <stdlib.h>

int main()
{
    int szam = 25;
    int *ip;
    ip = &szam;
    printf("szam=%i",*ip*2);
    return 0;
}
