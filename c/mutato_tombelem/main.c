#include <stdio.h>
#include <stdlib.h>
/* Hozz l�tre egy 5 elem�, eg�sz sz�mokat tartalmaz� t�mb�t, majd mutat� seg�ts�g�vel v�ltoztasd meg egy tetsz�leges elem�t!
 Az elem sorsz�m�t �s �j �rt�k�t a felhaszn�l� adja meg!*/
int main()
{
    int *ip;
    int elem;
    int valt;
    int i;
    int tomb[]={3,12,2,45,8};
    printf("elem:");
    scanf("%i",&elem);
    printf("Mennyire");
    scanf("%i",&valt);
    ip = &tomb[elem];
    *ip = valt;
    for(i = 0; i < 5; i++)
    {
         printf("%i ",tomb[i]);
    }


    return 0;
}
