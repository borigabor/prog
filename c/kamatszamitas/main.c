#include <stdio.h>
#include <stdlib.h>
/*Készíts programot kamatszámításhoz, ciklussal! Kérd be a tõke mennyiségét,
 a kamat éves értékét (%), illetve a befektetés idejét hónapokban!
 Írd ki hónapról hónapra, hogyan gyarapodik a befektetés!*/
int main()
{
    float alap;
    float kamat;
    int honap;
    float x;
    int i = 0;
    float n;

    printf("Add meg az osszeget:");
    scanf("%f",&alap);

    printf("Add meg a kamatot:");
    scanf("%f",&kamat);

    printf("Add meg a nonapok szamat:");
    scanf("%i",&honap);
    n = (kamat / 12);
    while(i < honap)
    {
        i++;
       x = ((n / 100) * alap);
       alap += x;
       printf("%i. honap:%.2f ft\n",i,alap);

    }

    return 0;
}
