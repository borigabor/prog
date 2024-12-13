#include <stdio.h>
#include <stdlib.h>

void rajzol(int a, int b)
{
    int i,j;
    for(i = 0; i < b; i++)
    {
        for(j = 0; j < a; j++)
        {
            if(i == 0 || j == 0 || i == b-1 || j == a-1)
            {
                printf("* ");
            }
            else{printf("  ");}

        }
        printf("\n");
    }
}

int main()
{
    int a,b;
    do{
    printf("Add meg a teglalap szelesseget:");
    scanf("%i",&a);

    printf("Add meg a teglalap magassagat:");
    scanf("%i",&b);

    if(a <= 0 || b <= 0 || a > 80 || b > 100)
    {
        printf("Helytelen ertek!\n");
    }
    }while(a <= 0 || b <= 0 || a > 80 || b > 100);
    rajzol(a,b);
    return 0;
}
