#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*A program bekéri az emberek nevét életkorát lekhelyét és kiírja a legidõsebb ember nevét*/

struct Ember
{
    char nev[40];
    int eletkor;
    char lakhely[40];
};


int main()
{
    struct Ember adat[2];
    int i;
    int max;
    int n = 0;
    for(i = 0; i < 2; i++)
    {
        printf("Add meg a(z) %i. ember nevet:",i+1);
        fgets(adat[i].nev,40,stdin);

        printf("Add meg a(z) %i. ember eletkorat:",i+1);
        scanf("%i",&adat[i].eletkor);
        fflush(stdin);

        printf("Add meg a(z) %i. ember lakhelyet:",i+1);
        fgets(adat[i].lakhely,40,stdin);

    }
    printf("\n");
    for(i = 0; i < 2; i++)
    {
        printf("Nev:%s",adat[i].nev);
        printf("Eletkor:%i\n",adat[i].eletkor);
        printf("Lakhely:%s",adat[i].lakhely);
        printf("\n");
    }
    max = adat[0].eletkor;

    for(i = 0; i < 2; i++)
    {
        if(adat[i].eletkor > max)
        {
             max = adat[i].eletkor;
             n = i;
        }

    }
   printf("A legidosebb: %s",adat[n].nev);
    return 0;
}
