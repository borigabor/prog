#include <stdio.h>
#include <stdlib.h>
/* Hozz létre egy 5 elemû, egész számokat tartalmazó tömböt, majd mutató segítségével változtasd meg egy tetszõleges elemét!
 Az elem sorszámát és új értékét a felhasználó adja meg!*/
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
