#include <stdio.h>
#include <stdlib.h>
/*K�sz�ts egy 10 elem�, eg�sz sz�mokat tartalmaz� t�mb�t �rt�kekkel! �ll�ts be egy pointer a t�mb �t�dik elem�re!
 K�rj be egy -4, +5 k�z�tti sz�mot, ami ki�rja a t�mb megfelel� sorsz�m� elem�t a pointerhez k�pest!*/
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
