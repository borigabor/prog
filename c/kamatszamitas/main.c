#include <stdio.h>
#include <stdlib.h>
/*K�sz�ts programot kamatsz�m�t�shoz, ciklussal! K�rd be a t�ke mennyis�g�t,
 a kamat �ves �rt�k�t (%), illetve a befektet�s idej�t h�napokban!
 �rd ki h�napr�l h�napra, hogyan gyarapodik a befektet�s!*/
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
