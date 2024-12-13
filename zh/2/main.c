#include <stdio.h>
#include <stdlib.h>
/*K�rd be 15 hallgat� jegyeit! �rasd ki, hogy a bukottak sz�ma, vagy a megfeleltek sz�ma t�bb-e!*/
int main()
{
    int tomb[15]; /*15 elem� t�mb*/
    int i = 0;
    int bukott = 0; /*A sz�ml�l�kat mindig ki kell null�zni!*/
    int megfelelt = 0;
    for(i = 0; i < 15; i++)
    {
        do{                                    /*bek�ri a 15 hallgat� jegyeit + kiv�telkezel�s(b�r a feladat k�l�n nem t�rt ki r� de fontos!)*/
        printf("A(z) %i. tanulo jegye:",i+1);
        scanf("%i",&tomb[i]);
            if(tomb[i] <= 0 || tomb[i] > 5)
                {
                    printf("Helytelen ertek!\n");
                }
        }while(tomb[i] <= 0 || tomb[i] > 5);
    }
    for(i = 0; i < 15; i++)
    {
        if(tomb[i] == 1) /*ha a t�mb adott eleme 1 akkor inditja a sz�ml��t*/
        {
            bukott++; /*sz�ml�l�*/
        }
        else{ megfelelt++;} /*ellenkez� esetben megsz�molja a t�bbit*/
    }
    if(bukott > megfelelt) /*ha a bukott nagyobb mint a megfelelt K�irja a hogy a bukottak sz�ma nagyobb*/
    {
        printf("A bukottak szama tobb!");
    }
    else                    /*ellenkez� esetben k��rja hogy a megfeleltek sz�ma nagyobb*/
    {
        printf("A megfeleltek szam tobb!");
    }
    return 0;
}
