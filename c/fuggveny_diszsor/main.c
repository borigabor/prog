#include <stdio.h>
#include <stdlib.h>
/*K�sz�ts f�ggv�nyt d�szsor n�ven, ami csillagokat �r ki egym�s mell�, a param�terben kapott sz�mban! K�sz�ts m�g egy d�sszsor f�gv�nyt
ami ugyanezt tetsz�leges karakterrel tudja.*/

int diszsor( int szam)
{
    int i;
    for(i = 0; i < szam; i++)
    {
        printf("*");
    }
    return szam;
}
int diszsor_ketto(int ertek, char kar)
{
    int i;
    for(i = 0; i < ertek; i++)
    {
        printf("%c",kar);
    }
    return kar;
}
int main()
{

    char betu;
    diszsor(15);
    printf("\nAdd meg a karaktert!:");
    scanf("%c",&betu);
    diszsor_ketto(15,betu);


    return 0;
}
