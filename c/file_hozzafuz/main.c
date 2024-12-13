#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fPointer;
    fPointer = fopen("alma.txt", "a"); /*ahányszor futtatom a programot anyiszor fogja hozzáfüzni*/
    fprintf(fPointer, "\n -bla bla");
    fclose(fPointer);
    return 0;
}
