#include <stdio.h>
#include <stdlib.h>
/*Rendezd növekvõ sorba az elõzõ feladat tömbjét, a felhasználók születési éve szerint! Írasd ki az elemeket!*/

struct Felhasznalo
{
    char nev[40];
    int szul_ev;

};
int main()
{
    struct Felhasznalo adat[5];
int i,j;
int max;
for(i = 0; i < 5; i++)
{
    printf("Add meg a(z) %i. felhasznalo nevet:",i+1);
    fgets(adat[i].nev,40,stdin);

    printf("Add meg a(z) %i. felhasznalo eletkorat:",i+1);
    scanf("%i",&adat[i].szul_ev);
    fflush(stdin);
}

for(i = 4; i > 0; i--)
{
    max = i;
    for(j = 0; j <= i; j++)
    if(adat[j].szul_ev > adat[max].szul_ev)
    max = j;
    int seged = adat[i].szul_ev;
    adat[i].szul_ev = adat[max].szul_ev;
    adat[max].szul_ev = seged;
}
printf("Szuletesi evek novekvo sorrendben!\n");
for(i = 0; i < 5; i++)
{
    printf("%i ",adat[i].szul_ev);
}
    return 0;
}
