#include <stdio.h>
#include <stdlib.h>
/*Kérj be egy számot 1-26 között (ismételd meg rossz adat beolvasásánál)! Írass ki betûket több sorban, Így: az elsõ sorban
  egy 'a' a másodikban két 'b' betû, a harmadikban három 'c', stb. Annyi sornyi betû legyen amennyi a beolvasott szám értéke*/
int main()
{
    char betuk[]={'a','b','c','d','e', /* Az angol abc karaktereit tartalmazó tömb.*/
                  'f','g','h','i','j',
                  'k','l','m','n','o',
                  'p','q','r','s','t',
                  'u','v','w','x','y','z'};
    int n;
    int i = 0,j = 0, m = 0;

        do{
                printf("n=");
                scanf("%i",&n);

                if(n <= 0 || n > 26) /* a felhasználóbarát hozzáálás miadt!*/
                {
                    printf("A hibas ertek!\n");
                }
        }while(n <= 0 || n > 26); /* ha a feltétel teljesül megismétli az adatbekérést*/

    /*egymásba ágyazott ciklus*/
    for(i = 0; i < n; i++) /* a karaktertömböt lépteti*/
    {
        m++;
        for(j = 0; j < m; j++) /* az adott karakteren belüli kiiratás m értéke az elso esetben 1 késõbb mindig növeljük eggyel az értékét lásd m++*/
        {
            printf("%c",betuk[i]); /* kiiratás*/
        }
        printf("\n"); /*sortörés*/

    }
    return 0;
}
