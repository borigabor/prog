#include <stdio.h>
#include <stdlib.h>
/*K�rj�nk be legfeljebb 10 karaktert a '*' v�gjel�ig, �rassuk ki, hogy bet�b�l vagy sz�mjegyb�l van-e t�bb benn�k!*/
int main()
{
    char kar;
    int db = 0;
    int szam = 0, betu = 0; /*sz�ml�l�k*/
    while(kar != '*' && db < 10) /*felt�tel kar nem lehet * illetve db fogom sz�molni minden alkalommal ha el�ri a 10-et kil�p*/
    {
        db++;
        printf("Add meg a(z) %i. karaktert: ",db);
        scanf("%c",&kar);
        fflush(stdin); /*ez musz�ly ide!*/
        if(kar >= '0' && kar <= '9') /*Itt vizsg�lom hogy sz�m-e*/
        {
            szam++; /*ha igen akkor megsz�molja �ket*/
        }
        else{
        betu++; /*ha nem akkor meg a bet�t sz�molja*/
        }
    }
    if(szam > betu) /*megn�zi mib�l van t�bb*/
    {
        printf("Szamjegybol van tobb!");
    }
    else if(betu > szam)
    {
        printf("Betubol van tobb!");
    }
    else{
    printf("Egyforma!");}
    return 0;
}
