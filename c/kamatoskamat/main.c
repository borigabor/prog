#include <stdio.h>
#include <stdlib.h>

int main()
{
    float osszeg;
    float alap;
    float kamat;
    int honap = 0;
    float x;
    float n;


    printf("Add meg az osszeget:");
    scanf("%f",&osszeg);

    printf("Add meg az alapot:");
    scanf("%f",&alap);

    printf("Add meg a kamatot:");
    scanf("%f",&kamat);


    n = kamat / 12;
    while(alap <= osszeg)
    {
        honap++;
        x = (n/100)*alap;
        alap += x;
    }
    printf("%i honap a kivant osszeg elerese!",honap);
    return 0;
}
