#include <stdio.h>
#include <stdlib.h>
/*Készíts függvényt, ami a múlt órai prímszámos függvény felhasználásával kiír prímszámokat, a paraméteréül kapott számig!*/

int prim(int szam)
{
    int i,j;
    int oszto = 0;
    for(i = 2; i <= szam; i++)
    {
        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                oszto++;
            }
        }
        if(oszto == 2)
        {
            printf("%i",i); if(i < szam-1){printf(",");}
        }
        oszto = 0;
    }
    return szam;
}
int main()
{
printf("Primszamok!\n");
prim(20);
    return 0;
}
