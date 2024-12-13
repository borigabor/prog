#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 30;
    int jegy[n];
    int i;
    float atlag = 0;
    float eredmeny = 0;
    int egyes = 0;
    for(i = 0; i < n; i++)
    {
        printf("Add meg a(z) %i. jegyet:",i+1);
        scanf("%i",&jegy[i]);
        if(jegy[i] != 1)
        {
            atlag += jegy[i];
        }
        else{
            egyes++;
        }
    }
    eredmeny = atlag /(n-egyes);
    if(egyes == n)
    {
        printf("Az osszes erdemjegy elegtelen!\n");
    }
    else if(eredmeny <= 2.50)
    {
        printf("elegseges!\n");
        printf("%.2f",eredmeny);
    }
    else if(eredmeny > 2.50 && eredmeny <= 3.50)
    {
        printf("kozepes!\n");
        printf("%.2f",eredmeny);
    }
    else if(eredmeny > 3.50 && eredmeny <= 4.50)
    {
        printf("Jo!\n");
        printf("%.2f",eredmeny);
    }
    else{printf("otos!\n");printf("%.2f",eredmeny);}
    return 0;
}
