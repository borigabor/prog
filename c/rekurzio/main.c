#include <stdio.h>
#include <stdlib.h>

/*Rekurzió: egy programozási módszer.Azt az esetet nevezzük így amikor egy eljárásban szereplõ kód önmagát(ugyanazt az eljárást)
hívja meg. Véges számú lépés után meg fog állni.*/

int fibo(int n) /*fibonacci számsororzat*/
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
