#include <stdio.h>
#include <stdlib.h>
/*K�sz�ts f�ggv�nyeket, amelyek beolvasnak, illetve ki�rnak egy N elem�, eg�sz sz�mokat tartalmaz� t�mb�t!*/

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
