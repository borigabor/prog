#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    int z;
    int tv;
    int ta;
    int kv;
    int ka;


    printf("Add meg a hasab 3 oldalanak hosszusagat \n");

    printf("x=");
    scanf("%i",&x);

    printf("y=");
    scanf("%i",&y);

    printf("z=");
    scanf("%i",&z);
    if(x == y && y == z)
    {
       kv = x*y*z;
       ka  = 6*x*x;

        printf("A hasab terfogata: %i\n",kv);
        printf("A hasab felszine: %i",ka);
    }
    else{
    tv = x*y*z;
    ta = (z*x + z*y + x*y)*2;
    printf("A hasab terfogata: %i\n",tv);
    printf("A hasab felszine: %i",ta);
    }

    return 0;
}
