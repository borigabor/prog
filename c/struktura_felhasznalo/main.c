#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*K�sz�ts strukt�r�t, ami egy felhaszn�l� nev�t �s sz�let�si �v�t t�rolja! K�sz�ts egy 5 elem� t�mb�t bel�le!*/
struct Felhasznalo
{
    char nev[40];
    int szul_ev;

};
int main()
{
struct Felhasznalo adat[5];
int i;
for(i = 0; i < 5; i++)
{
    printf("Add meg a(z) %i. felhasznalo nevet:",i+1);
    fgets(adat[i].nev,40,stdin);

    printf("Add meg a(z) %i. felhasznalo eletkorat:",i+1);
    scanf("%i",&adat[i].szul_ev);
    fflush(stdin);
}
for(i = 0; i < 5; i++)
{
    printf("%i.Nev:%s",i+1,adat[i].nev);
    printf("%i.Szuletesi ev:%i\n",i+1,adat[i].szul_ev);
    printf("\n");
}
    return 0;
}
