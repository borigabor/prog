#include <stdio.h>
#include <stdlib.h>
/*Készíts függvényt amely visszadja hogy a paraméteréül kapott szám prím-e!*/
int prim(int szam)
{
    int i;
    int oszto = 0;
    for(i = 1; i <= szam; i++)
    {
        if(szam % i == 0)
        {
            oszto++;
        }
    }
    if(oszto == 2)
    {
        printf("Primszam!");
    }
    else{printf("Nem primszam!");}
}
int main()
{
prim(23);
    return 0;
}
