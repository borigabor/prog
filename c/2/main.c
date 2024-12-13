#include <stdio.h>
#include <stdlib.h>
/*Kérd be 15 hallgató jegyeit! Írasd ki, hogy a bukottak száma, vagy a megfeleltek száma több-e!*/
int main()
{
    int tomb[15]; /*15 elemû tömb*/
    int i = 0;
    int bukott = 0; /*A számlálókat mindig ki kell nullázni!*/
    int megfelelt = 0;
    for(i = 0; i < 15; i++)
    {
        do{                                    /*bekéri a 15 hallgató jegyeit + kivételkezelés(bár a feladat külön nem tért ki rá de fontos!)*/
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
        if(tomb[i] == 1) /*ha a tömb adott eleme 1 akkor inditja a számláót*/
        {
            bukott++; /*számláló*/
        }
        else{ megfelelt++;} /*ellenkezõ esetben megszámolja a többit*/
    }
    if(bukott > megfelelt) /*ha a bukott nagyobb mint a megfelelt Kíirja a hogy a bukottak száma nagyobb*/
    {
        printf("A bukottak szama tobb!");
    }
    else                    /*ellenkezõ esetben kíírja hogy a megfeleltek száma nagyobb*/
    {
        printf("A megfeleltek szam tobb!");
    }
    return 0;
}
