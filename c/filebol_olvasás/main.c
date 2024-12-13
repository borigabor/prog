#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fPointer;
    fPointer = fopen("alma.txt", "r");
    char line[101]; /*feltételezük hagy 100 karakterböl áll*/
    while(!feof(fPointer))/*Ezzel a függvényel addig megyünk mig nincs vége a fájlnak*/
    {
        fgets(line,100,fPointer);/*három paramétert kér az elsõ az hogy mibe a második hogy milyen hosszú és harmdaik hogy miböl*/
        puts(line);
    }
    fclose(fPointer);
    return 0;
}
