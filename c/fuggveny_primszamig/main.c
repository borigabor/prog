#include <stdio.h>
#include <stdlib.h>
/*K�sz�ts f�ggv�nyt, ami a m�lt �rai pr�msz�mos f�ggv�ny felhaszn�l�s�val ki�r pr�msz�mokat, a param�ter��l kapott sz�mig!*/

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
