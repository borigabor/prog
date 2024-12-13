#include <stdio.h>
#include <stdlib.h>
/*Írj stukturát ami bekeri 5 Mobiltelefonnak a nevet es az arat
irj fügvényt ami kiirja a 3 legdragabb telefon adatait
írj függvényt amely kiírja azoknak a telefonoknak a nevet amelyek olcsobbak voltak mint 50 000 ft
Írasd ki a legdragabb telefon arat A kiiratáshot mutatót használj! */

struct Mobil
{
    char nev[40];
    int ar;
};

void rendez(struct Mobil tomb[])
{
    int n = 5;
    int i,j,tmp,utolso;
    char seged[40];

    for(i = n-1; i > 0; i = utolso)
    {
        utolso = 0;
        for(j = 0; j < i; j++)
        if(tomb[j].ar < tomb[j+1].ar)
        {
            tmp = tomb[j].ar;
            strcpy(seged,tomb[j].nev);
            tomb[j].ar = tomb[j+1].ar;
            strcpy(tomb[j].nev,tomb[j+1].nev);
            tomb[j+1].ar = tmp;
            strcpy(tomb[j+1].nev,seged);
            utolso = j;

        }
    }
    for(i = 0; i < 3; i++)
    {
        printf("%s",tomb[i].nev);
        printf("%i",tomb[i].ar);
        printf("\n");
    }
}

void olcso(struct Mobil tomb[])
{
    int n = 5;
    int i,j = 0;
    struct Mobil b[n];
    for(i = 0; i < 5; i++)
        if(tomb[i].ar < 5000)
        {
            strcpy(b[j].nev, tomb[i].nev);
            j++;
        }
        int m = j;

        for(i = 0; i < m; i++)
        {
            printf("\n%s\n",b[i].nev);
        }
}
int main()
{
   struct Mobil adat[5];
   int i;
   int* ip;
   for(i = 0; i < 5; i++)
   {
       printf("Add meg a(z) %i. telefon nevet:",i+1);
       fgets(adat[i].nev,40,stdin);

       printf("Add meg a(z) %i. telefon arat:",i+1);
       scanf("%i",&adat[i].ar);
       fflush(stdin);
   }
   printf("\n A harom legdragabb telefon adatai:\n");
rendez(adat);
printf("\n Azoknak a telefonoknak a neve amik olcsobbak mint 5000ft");
olcso(adat);
int max = adat[0].ar;
for(i = 0; i < 5; i++)
{
    if(adat[i].ar > max)
    {
        max = adat[i].ar;
    }
}
ip = &max;
printf("A legdragabb telefon ara:%i",*ip);
    return 0;
}
