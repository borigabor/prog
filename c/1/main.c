#include <stdio.h>
#include <stdlib.h>
/*K�sz�ts programot, ami 1-es gomb lenyom�s�ra fahrenheitb�l celsius fokra v�lt �t egy bek�rt �rt�ket, a 2-es gombra pedig ford�tva! */
int main()
{
    int szam;
    float c = 0, f = 0;
    /*lehet�s�gek felsorol�sa*/
        printf("(1) Fahrenheit - Celsius\n");
        printf("(2) Celsius - Fahrenheit\n");
    scanf("%i",&szam);

    switch(szam) /*t�bsz�r�s el�gaz�s� felt�teles utas�t�s.*/
    {
        case 1: printf("Add meg a fokot(Fahrenheit):"); /*els� �g + �rt�k bek�r�s*/
                    scanf("%f",&f);
                        c = (f-32)*5/9; /*k�plet Fahrenheit-b�l Celsius-ba*/
                            printf("%.1f Celsius",c); break;

        case 2: printf("Add meg a fokot(Celsius):"); /*m�sodik �g + �rt�k bek�r�s*/
                    scanf("%f",&c);
                        f = ((c* 9)/5) + 32; /* k�plet Celsius-bol Fahrenheit-be*/
                            printf("%.1f Fahrenheit",f); break;
        default: /*Kiv�telkezel�s*/
            printf("Hiba! Nincs ilyen opcio!");
    }
    return 0;
}
