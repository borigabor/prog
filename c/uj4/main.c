#include <stdio.h>
#include <stdlib.h>

int main()
{
    char betu[10];
    int i = 0;

      while(betu[i] != '*' && i < 10)
      {
    i++;
      scanf("%c",&betu[i]);
      betu[i]=getchar();
      }

    return 0;
}
