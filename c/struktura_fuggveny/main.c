#include <stdio.h>
#include <stdlib.h>
/* Készíts függvényt, ami a felhasználók tömbjébõl kiválogatja azokat,
   akik nagykorúak (betöltötték a 18-at)! A függvény térjen vissza az eredménytömb címével!*/
 struct Felhasznalo
{
    char nev[40];
    int szul_ev;

};
int nagykoruak(struct Felhasznalo tomb[5])
{
    int i,j = 0;
    struct Felhasznalo b[5];

    for(i = 0; i < 5; i++)
if(tomb[i].szul_ev >= 18)
{
    b[j].szul_ev = tomb[i].szul_ev;
    strcpy(b[j].nev,tomb[i].nev);
    j++;

}
int m = j;
for(i = 0; i < m; i++)
{
    printf("%s ",b[i].nev);

}
return b;
}
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
printf("A nagykoruak neve!\n");
nagykoruak(adat);


    return 0;
}
