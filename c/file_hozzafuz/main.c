#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fPointer;
    fPointer = fopen("alma.txt", "a"); /*ah�nyszor futtatom a programot anyiszor fogja hozz�f�zni*/
    fprintf(fPointer, "\n -bla bla");
    fclose(fPointer);
    return 0;
}
