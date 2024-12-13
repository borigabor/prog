#include <stdio.h>
#include <stdlib.h>
/*Készíts függvényeket, amelyek beolvasnak, illetve kiírnak egy N elemû, egész számokat tartalmazó tömböt!*/

void beker(int tomb[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("Add meg a(z) %i. szamot:",i+1);
        scanf("%i",&tomb[i]);
    }
}

void kiir(int n)
{
  int tomb[n];
  int i;
  beker(tomb,n);
  for(i = 0; i < n; i++)
  {
      printf("%i ",tomb[i]);
  }

}

int main()
{
kiir(5);

    return 0;
}
