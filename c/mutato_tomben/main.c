#include <stdio.h>
#include <stdlib.h>
/*Készíts egy 10 elemû, egész számokat tartalmazó tömböt értékekkel! Állíts be egy pointer a tömb ötödik elemére!
 Kérj be egy -4, +5 közötti számot, ami kiírja a tömb megfelelõ sorszámú elemét a pointerhez képest!*/
int main()
{
    int tomb[]={20,13,6,7,23,3,24,50,30,10};
    int *ip;
    int i = 0;
    int szam;
    ip = &tomb[4];
    printf("Addj meg egy szamot -4 es +5 kozott\n");
    do{
    printf("szam:");
    scanf("%i",&szam);
    if(szam > 5 || szam < -4)
    {
        printf("Helytelen ertek!\n");
    }
    }while(szam > 5 || szam < -4);
    while(i != szam)
    {

       if(szam < 0)
       {
           i--;
           *ip--;
       }
       else{i++; *ip++;}
    }
    printf("%i",*ip);
    return 0;
}
