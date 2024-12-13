#include <stdio.h>
#include <stdlib.h>

/*Rekurzi�: egy programoz�si m�dszer.Azt az esetet nevezz�k �gy amikor egy elj�r�sban szerepl� k�d �nmag�t(ugyanazt az elj�r�st)
h�vja meg. V�ges sz�m� l�p�s ut�n meg fog �llni.*/

int fibo(int n) /*fibonacci sz�msororzat*/
{
    if(n < 2)
    {
        return n;
    }
    else
    return fibo(n-1) + fibo(n-2);
}
int main()
{
    int i;
    int n = 10;
    for(i = 0; i < n; i++)
    {
       printf("%i ",fibo(i));
    }

    return 0;
}
