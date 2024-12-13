#include <stdio.h>
#include <stdlib.h>
/*lecseréljük mosógépünket egy korszerübbre. Mikor hozza vissza az árát, ha ismerjük az új készülék árát, az új és a régi mosógép
  fogyasztását, és egy KWh óra villamos energia árát! Utóbbi adatokat kérjük be a programba!*/
int main()
{

    int kulonbozet = 12483; /*új és régi mosógép ára közti diferencia*/
    int uj_fogy;
    int regi_fogy;
    int eredmeny = 0;
    int villamos_e;

    printf("Add meg a regi mosogep fogyasztasat:"); /*adatok bekérése*/
    scanf("%i",&regi_fogy);
    printf("Add meg az uj mosogep fogyasztasat:");
    scanf("%i",&uj_fogy);
    if(uj_fogy >= regi_fogy)  /*feltétel abban az esetben ha az új mosogép teljesítménye nagyobb lenn(nyilván akkor nem hozza vissza az árát)*/
    {
        printf("Az uj mosogep nem fogja visszahozni az arat!");
    }
else{ /*Ha minden okés akkor bekéri Kwh villamos energia árát*/
    printf("Add meg a Kwh  ora villamos energia arat:");
    scanf("%i",&villamos_e);
    int n = 0;
    while(eredmeny <= kulonbozet) /*ciklus mind addig fog menni amíg az erdmeny nem lesz nagyobb vagy egyenlõ moint a különbözet*/
    {
            n++; /*ez fogja számolni az eltelt órákat és majd szorozni az eredményt*/
        eredmeny =((regi_fogy * villamos_e) * n) - ((uj_fogy * villamos_e) * n); /*maga a képlet*/


    }
    printf("Az uj mosogep %i ora hasznalat utan hozza vissza az arat!",n);
}
    return 0;
}
