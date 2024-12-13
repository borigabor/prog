#include <stdio.h>
#include <stdlib.h>

int main()
{

   int i,j,n = 5;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < 2*n-1; j++)
        {
            if(j < n -1 -i || j > n - 1 +i )
            {
                printf(" ");
            }
            else{printf("*");}
        }
printf("\n");
    }
    return 0;
}
