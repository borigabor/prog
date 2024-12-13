#include <stdio.h>
#include <stdlib.h>
/*Kérj be számokat 0 végjeléig, írassuk ki a legkisebb pozitív és a legnagyobb negatív szám különbségét!*/
int main()
{
int szam;
int max = (szam*-1); /*Kezdo ertek minusznak kell hogy legynen!*/
int min = szam; /*Az eslo szam kezdo erteket fogja kapni(azert nem a ciklusban mart mindig felvene szam erteket!)*/
while(szam != 0)
{
    printf("Add meg a szamot:");
    scanf("%i",&szam);
    if(szam > 0 && min > szam) /*szam nagyobb mint nulla akkor pozitiv lessz es utána vizsgalom ha szam kisebb mint min atveszi az erteket*/
    {
      min = szam;
    }
    if(szam < 0 &&  max < szam ) /*szam kisebb mint nulla es ha szam negyobb mint max felveszi az eteket*/
    {
        max = szam;
    }
}
printf("%i",min+max); /*A ketto oszege adja a kulonbseget*/

    return 0;
}
