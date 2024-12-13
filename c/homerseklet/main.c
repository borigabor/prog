#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Add meg a viz hofokat! ");
    scanf("%i",&x);
    if(x <= 0)
    {
        printf("Szilard!");
    }
        else if(x >= 100)
        {
            printf("Legnemu!");
        }
            else{printf("Folyekony!");}
    return 0;
}
