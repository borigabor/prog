#include <stdio.h>
#include <stdlib.h>

char kod()
{
    srand(time(0));
    return rand();

}
int main()
{
    int i;
    int n = 3;
    for(i = 0; i < n; i++)
    {
       printf("%i\n",kod());
    }



    return 0;
}
