#include <stdio.h>
#include <stdlib.h>

int main()
{
int* tomb =(int*) malloc(1*sizeof(int));
int n = 0;
int i;
while(n != 5)
{
    n++;
    printf("Szam:");
    scanf("%i",&tomb[i]);
    tomb = (int*) realloc(tomb,n*sizeof(int));
    tomb[n-1] = (int*)calloc(n,sizeof(int));
}

for(i = 0; i < 5; i++)
{
    printf("%i ",tomb[i]);
}




    return 0;
}
