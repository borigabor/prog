#include <stdio.h>
#include <stdlib.h>
/*K�rd be 0 v�gjel�ig, de legfeljebb 20 �lelmiszer energiatartalm�t (kj/100g) �s �rasd ki a t�panyagban legszeg�nyebb �s legd�sabb
  �lelmiszer k�zti k�l�nbs�g m�rt�k�t!*/
int main()
{
    int elelmiszer;
    int db = 0;
    int max = 0,min = elelmiszer;
    while(elelmiszer != 0 && db < 20) /*vizsg�lom hogy ha elelmiszer �rt�ke 0 vagy a bevitt �rt�kek sz�ma t�bb min 20 akko kil�p*/
    {
        db++;  /*Itt sz�molja a bevitt adatok sz�m�t*/
        printf("A(z) %i. energiatartalom(kj/100):",db);
        scanf("%i",&elelmiszer);

        if(elelmiszer < min && elelmiszer >0) /*minimum �rt�k vizsg�lata */
        {
            min = elelmiszer;
        }
        if(elelmiszer > max) /*maximum �rt�k vizsg�lata*/
        {
            max = elelmiszer;
        }

    }
        printf("A legszegenyebb es a legdusabb tapanyag kozotti kulonbseg %i",max-min); /*max �rt�kb�l - min �rt�k adja a k�l�nbs�get*/

    return 0;
}
