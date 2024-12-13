#include <stdio.h>
#include <stdlib.h>

int main()
{
    int elso;
    int masodik;
    int barat_egy = 0;
    int barat_ketto = 0;
    int i;
    printf("elso:");
    scanf("%i",&elso);
    printf("masodik:");
    scanf("%i",&masodik);
    for(i = 1; i <= elso; i++)
    {
        if(elso % i == 0)
        {
            barat_egy += i;
        }

    }
    for(i = 1; i <= masodik; i++)
    {
        if(masodik % i == 0)
        {
            barat_ketto += i;
        }
    }
    if(barat_egy == barat_ketto)
    {
        printf("Ez a szampar baratsagos szam!");
    }
    else{
    printf("Ez a szampar nem baratsagos szam!");}
    return 0;
}
