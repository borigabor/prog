#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*A bevitt adatok alapj�n eld�nti hogy k�tdimenzi�s t�mb egys�gm�trix-e (f��tl�iban 1-es a t�bb helyen nulla szerepel!)*/
int main()
{
int tomb[3][3];
int i,j;
bool a = false;
printf("Adja meg a matrix elemiet:\n");
for(i = 0; i < 3; i++)
{
    for(j = 0; j < 3; j++)
    {
        printf("tomb[%i][%i]",i+1,j+1);
        scanf("%i",&tomb[i][j]);
    }
}
for(i = 0; i < 3; i++)
{

    for(j = 0; j < 3; j++)
    {
        if(i == j && tomb[i][j] != 1 || i != j && tomb[i][j] != 0)
        {
            a = true;
        }
printf("%i",tomb[i][j]);


    }
printf("\n");

}
if(a == true)
{
    printf("Nem egysegmartix!");
}
else{printf("Egysegmatrix!");}
    return 0;
}
