#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fPointer;
    fPointer = fopen("test.bin", "wb");
    int tomb[5];
    int i;
    for(i = 0; i < 5; i++)
    {
        tomb[i]=i;
        fprintf(fPointer,"%i ",tomb[i]);
    }
    fclose(fPointer);
    char sor[100];
    fPointer = fopen("test.bin", "rb");
    while(!feof(fPointer))
    {
        fgets(sor,100,fPointer);
        puts(sor);
    }
    fclose(fPointer);
    return 0;
}
