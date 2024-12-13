#include <stdio.h>
#include <stdlib.h>
/*K�rj be egy sz�mot 1-26 k�z�tt (ism�teld meg rossz adat beolvas�s�n�l)! �rass ki bet�ket t�bb sorban, �gy: az els� sorban
  egy 'a' a m�sodikban k�t 'b' bet�, a harmadikban h�rom 'c', stb. Annyi sornyi bet� legyen amennyi a beolvasott sz�m �rt�ke*/
int main()
{
    char betuk[]={'a','b','c','d','e', /* Az angol abc karaktereit tartalmaz� t�mb.*/
                  'f','g','h','i','j',
                  'k','l','m','n','o',
                  'p','q','r','s','t',
                  'u','v','w','x','y','z'};
    int n;
    int i = 0,j = 0, m = 0;

        do{
                printf("n=");
                scanf("%i",&n);

                if(n <= 0 || n > 26) /* a felhaszn�l�bar�t hozz��l�s miadt!*/
                {
                    printf("A hibas ertek!\n");
                }
        }while(n <= 0 || n > 26); /* ha a felt�tel teljes�l megism�tli az adatbek�r�st*/

    /*egym�sba �gyazott ciklus*/
    for(i = 0; i < n; i++) /* a karaktert�mb�t l�pteti*/
    {
        m++;
        for(j = 0; j < m; j++) /* az adott karakteren bel�li kiirat�s m �rt�ke az elso esetben 1 k�s�bb mindig n�velj�k eggyel az �rt�k�t l�sd m++*/
        {
            printf("%c",betuk[i]); /* kiirat�s*/
        }
        printf("\n"); /*sort�r�s*/

    }
    return 0;
}
