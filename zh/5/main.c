#include <stdio.h>
#include <stdlib.h>
/*Kérd be 0 végjeléig, de legfeljebb 20 élelmiszer energiatartalmát (kj/100g) és írasd ki a tápanyagban legszegényebb és legdúsabb
  élelmiszer közti különbség mértékét!*/
int main()
{
    int elelmiszer;
    int db = 0;
    int max = 0,min = elelmiszer;
    while(elelmiszer != 0 && db < 20) /*vizsgálom hogy ha elelmiszer értéke 0 vagy a bevitt értékek száma több min 20 akko kilép*/
    {
        db++;  /*Itt számolja a bevitt adatok számát*/
        printf("A(z) %i. energiatartalom(kj/100):",db);
        scanf("%i",&elelmiszer);

        if(elelmiszer < min && elelmiszer >0) /*minimum érték vizsgálata */
        {
            min = elelmiszer;
        }
        if(elelmiszer > max) /*maximum érték vizsgálata*/
        {
            max = elelmiszer;
        }

    }
        printf("A legszegenyebb es a legdusabb tapanyag kozotti kulonbseg %i",max-min); /*max értékböl - min érték adja a különbséget*/

    return 0;
}
