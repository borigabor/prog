#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int jegyek[10];
    int i;
    bool bukas = false;
    bool jeles = true;
    int otos = 0;
    float atlag = 0;
    for(i = 0; i < 10; i++)
    {
        do{
        printf("Add meg a(z) %i. tanulo jegyet:",i+1);
        scanf("%i",&jegyek[i]);
    if(jegyek[i] <= 0 || jegyek[i] > 5)
    {
        printf("Helytelen ertek!\n");
    }
    if(jegyek[i] == 1)
    {
        bukas = true;
    }
        if(jegyek[i] != 5)
    {
        jeles = false;
    }
    if(jegyek[i] == 5)
    {
        otos++;
    }
    atlag += jegyek[i];
    }while(jegyek[i] <= 0 || jegyek[i] > 5);
    }
    if(bukas == true)
    {
        printf("\nVolt bukas az osztalyban!");
    }

    else{printf("\nNem volt bukas az osztalyban!");}
    if(jeles == true)
    {
        printf("\nAz osztaly jeles volt!");
    }
    else{printf("\nAz osztaly nem volt jeles!");}
    printf("\n%i otots volt az osztalyban!",otos);
    printf("\nAz osztaly atlaga: %.1f",atlag/10);
    return 0;
}
