#include <stdio.h>
#include <stdlib.h>
/*K�sz�ts programot ami egy t�mbe bek�r 5 sz�mot, majd mutat� seg�ts�g�vel visszafel� �rja ki azokat!*/

int main()
{
    int tomb[5];
    int i;
    int *ip;
    for(i = 0; i < 5; i++)
    {
        printf("Add meg a(z) %i. szamot:",i+1);
        scanf("%i",&tomb[i]);
    }
    for(i = 0; i < 5; i++)
    {
        ip = &tomb[i];
    }
    for(i = 0; i < 5; i++)
    {
        printf("%i ",*ip);
        *ip--;
    }

    return 0;
}
