#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r;
    float v;
    float a;
    printf("Add meg a gomb sugarat!\n r=");
    scanf("%i",&r);

    v = (4*r*r*r*3.14) / 3;
    a = 4*r*r*3.14;
    printf("A gomb terfogata: v=%.2f\n",v);
    printf("A gomb felszine: a=%.2f",a);
    return 0;
}
