#include <stdio.h>
#include <stdlib.h>
/*Készíts programot, ami 1-es gomb lenyomására fahrenheitbõl celsius fokra vált át egy bekért értéket, a 2-es gombra pedig fordítva! */
int main()
{
    int szam;
    float c = 0, f = 0;
    /*lehetõségek felsorolása*/
        printf("(1) Fahrenheit - Celsius\n");
        printf("(2) Celsius - Fahrenheit\n");
    scanf("%i",&szam);

    switch(szam) /*töbszörös elágazású feltételes utasítás.*/
    {
        case 1: printf("Add meg a fokot(Fahrenheit):"); /*elsõ ág + érték bekérés*/
                    scanf("%f",&f);
                        c = (f-32)*5/9; /*képlet Fahrenheit-böl Celsius-ba*/
                            printf("%.1f Celsius",c); break;

        case 2: printf("Add meg a fokot(Celsius):"); /*második ág + érték bekérés*/
                    scanf("%f",&c);
                        f = ((c* 9)/5) + 32; /* képlet Celsius-bol Fahrenheit-be*/
                            printf("%.1f Fahrenheit",f); break;
        default: /*Kivételkezelés*/
            printf("Hiba! Nincs ilyen opcio!");
    }
    return 0;
}
