#include <stdio.h>
#include <stdlib.h>

int main()
{
FILE * fPointer;
fPointer = fopen("teszt.txt", "r");
char sor[100];
while(!feof(fPointer))
{
    fgets(sor,100,fPointer);
    puts(sor);
}
fclose(fPointer);
    return 0;
}
