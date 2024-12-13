#include <stdio.h>
#include <stdlib.h>
/*lecser�lj�k mos�g�p�nket egy korszer�bbre. Mikor hozza vissza az �r�t, ha ismerj�k az �j k�sz�l�k �r�t, az �j �s a r�gi mos�g�p
  fogyaszt�s�t, �s egy KWh �ra villamos energia �r�t! Ut�bbi adatokat k�rj�k be a programba!*/
int main()
{

    int kulonbozet = 12483; /*�j �s r�gi mos�g�p �ra k�zti diferencia*/
    int uj_fogy;
    int regi_fogy;
    int eredmeny = 0;
    int villamos_e;

    printf("Add meg a regi mosogep fogyasztasat:"); /*adatok bek�r�se*/
    scanf("%i",&regi_fogy);
    printf("Add meg az uj mosogep fogyasztasat:");
    scanf("%i",&uj_fogy);
    if(uj_fogy >= regi_fogy)  /*felt�tel abban az esetben ha az �j mosog�p teljes�tm�nye nagyobb lenn(nyilv�n akkor nem hozza vissza az �r�t)*/
    {
        printf("Az uj mosogep nem fogja visszahozni az arat!");
    }
else{ /*Ha minden ok�s akkor bek�ri Kwh villamos energia �r�t*/
    printf("Add meg a Kwh  ora villamos energia arat:");
    scanf("%i",&villamos_e);
    int n = 0;
    while(eredmeny <= kulonbozet) /*ciklus mind addig fog menni am�g az erdmeny nem lesz nagyobb vagy egyenl� moint a k�l�nb�zet*/
    {
            n++; /*ez fogja sz�molni az eltelt �r�kat �s majd szorozni az eredm�nyt*/
        eredmeny =((regi_fogy * villamos_e) * n) - ((uj_fogy * villamos_e) * n); /*maga a k�plet*/


    }
    printf("Az uj mosogep %i ora hasznalat utan hozza vissza az arat!",n);
}
    return 0;
}
