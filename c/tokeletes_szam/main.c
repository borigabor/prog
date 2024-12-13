#include <stdio.h>
#include <stdlib.h>

int main()
{
    int szam;
    int i;
    int eredmeny = 0;
    printf("Add meg a szamot:");
    scanf("%i",&szam);
    for(i = 1; i < szam; i++)
    {
        if(szam % i == 0)
        {
         eredmeny += i;
        }

    }
    if(eredmeny == szam)
    {
        printf("Tokeletes szam!");
    }
    else{printf("Nem tokeletes szam!");}
    return 0;
}
