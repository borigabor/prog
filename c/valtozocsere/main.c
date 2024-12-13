#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    int z;
    printf("X=");
    scanf("%i",&x);
    printf("Y=");
    scanf("%i",&y);
    if(x > y)
    {
        z = x;
        x = y;
        y = z;
    }
    printf("\n-----------------\n");
    printf("X=%i\n",x);
    printf("Y=%i",y);
    return 0;
}
