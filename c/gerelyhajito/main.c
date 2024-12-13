#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    int z;

    printf("Elso: ");
    scanf("%i",&x);

    printf("Masodik: ");
    scanf("%i",&y);

    printf("Harmadik: ");
    scanf("%i",&z);

    if(x > y && x > z)
    {
        printf("Az elso nyert!");
    }
    else if(y > x && y > z)
    {
        printf("A masodik nyert!");
    }
    else if(z > x && z > y)
    {
        printf("A harmadik nyert!");
    }
    else if(x == y && x > z )
    {
        printf("Az elso ketto dontetlen!");
    }
    else if(y == z && y > x)
    {
        printf("A masodik es a harmadik dontetlen!");
    }
    else if(x == z && x > y)
    {
        printf("Az elso es a harmadik dontetlen!");
    }
    else{printf("Dontetlen!");}
    return 0;
}
