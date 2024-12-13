#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*Kérjünk be egy számot, mmajd állapítsuk meg, hogy minden számjegye növekszik-e (pl. 1267), s ha igen, mennyi a legnagyobb
növekedés mértéke (pl. 4, a 2 és a 6-os számjegy között)*/
int main()
{
       int szam;
       int ertek;
       int min = ertek; /*Kezdo erteke maga a szam osztva tiz*/
       bool nov = false; /*kapcsolokent szolgal (nem biztos hogy zh-an a tanrnak tetszene de nekem igy egyszerubb meg nulkele is meg lehet csinalni)*/
       int max = 0;

    printf("Add meg a szamot: ");
    scanf("%i",&szam);
    while(szam!=0) /*Addig fog osztogatni amig a szam 0 nem lesz*/
    {

        ertek = szam % 10; /*osztas muveletek (maradekos es maradek nulkuli)*/
         szam /= 10;
        if(ertek < min) /*vizsgalja a szamot amit levettel a szamjegybol hogy nagyobb-e mint az aktualis ertek*/
        {
            min = ertek;
        }
        else{
        nov = true; /*ha nem akkor igazra allotjuk a kpcsolot*/
        }
        if(ertek > max)
        {
            max = ertek;
        }
    }
    if(nov == true) /*ha nov igaz akkor nem novekszik*/
    {
        printf("Nem novekszik!");
    }
    else{printf("novekszik!\n"); printf("A legnagyobb novekedes merteke:%i",max-min);} /*ha nov hamis maradt az az a ciklusban nem lepett be az else agba akkor novekszik*/


    return 0;
}
