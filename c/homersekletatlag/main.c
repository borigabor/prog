#include <stdio.h>
#include <stdlib.h>

int main()
{
int homerseklet[] ={12,4,10,9,8,16,3,4,2,22,8,5,4,12,11,8,3,13,14,5,6,2,4,3,6,7,8,7,4,5};
int i;
int max = 0;
int n = 0;
int nap;
for(i = 0; i < 30; i++)
{
   if(homerseklet[i] > max)
   {
       max = homerseklet[i];

   }
}
for(i = 0; i < 30; i++)
{
    n++;
    if(homerseklet[i] == max)
    {
        nap = n;
    }
}
printf("A legmelegebb homerseklet %i fok volt a %i. napon",max,nap);
    return 0;
}
