#include <stdio.h>
#include <stdlib.h>
/*Készíts függvényt díszsor néven, ami csillagokat ír ki egymás mellé, a paraméterben kapott számban! Készíts még egy dísszsor fügvényt
ami ugyanezt tetszõleges karakterrel tudja.*/

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
