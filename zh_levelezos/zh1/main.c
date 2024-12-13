#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tomb[]={12,3,-5,8,9,10,7,-2,12,3,5,4,7,6};
    int max = tomb[0];
    int min = tomb[0];
    int i;
    int n = 14;
    for(i = 0; i < n; i++)
    {
      if(tomb[i] > max)
      {
          max = tomb[i];
      }
    }
    for(i = 0; i < n; i++)
    {
        if(tomb[i] < min)
        {
            min = tomb[i];
        }
    }
    if(max > 0 && min < 0)
    {
        printf("%i",(max-min));
    }

    return 0;
}
