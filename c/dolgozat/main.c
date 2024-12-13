#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jegy;
    int alap = 20;
    float szazalek = 0.2;
    float osztalyzat = 0;
    int i= 0;
    while(i < 1)
    {
        i++;
       do{
            printf("Osztalyzat:");
            scanf("%i",&jegy);
                if(jegy <= 0 || jegy > 20)
                {
                    printf("Helytelen ertek add meg megegyszer!\n");
                }

    }while(jegy <= 0 || jegy > 20);
    }
    osztalyzat = (jegy / szazalek);
    printf("%.0f\n",osztalyzat);
    if(osztalyzat <= 59)
    {
        printf("Elegtelen!");
    }
    else if(osztalyzat >= 60 && osztalyzat < 70)
    {
        printf("Elegseges!");
    }
    else if( osztalyzat >= 70 && osztalyzat < 80)
    {
        printf("Kozepes!");
    }
    else if(osztalyzat >= 80 && osztalyzat < 90)
    {
        printf("Jo!");
    }
    else{printf("Jeles!");}
    return 0;
}
