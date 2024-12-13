#include <stdio.h>
#include <stdlib.h>
/*Kérjünk be legfeljebb 10 karaktert a '*' végjeléig, írassuk ki, hogy betüböl vagy számjegyböl van-e több bennük!*/
int main()
{
    char kar;
    int db = 0;
    int szam = 0, betu = 0; /*számlálók*/
    while(kar != '*' && db < 10) /*feltétel kar nem lehet * illetve db fogom számolni minden alkalommal ha eléri a 10-et kilép*/
    {
        db++;
        printf("Add meg a(z) %i. karaktert: ",db);
        scanf("%c",&kar);
        fflush(stdin); /*ez muszály ide!*/
        if(kar >= '0' && kar <= '9') /*Itt vizsgálom hogy szám-e*/
        {
            szam++; /*ha igen akkor megszámolja õket*/
        }
        else{
        betu++; /*ha nem akkor meg a betüt számolja*/
        }
    }
    if(szam > betu) /*megnézi miböl van több*/
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
