#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fPointer;
    fPointer = fopen("alma.txt", "r");
    char line[101]; /*felt�telez�k hagy 100 karakterb�l �ll*/
    while(!feof(fPointer))/*Ezzel a f�ggv�nyel addig megy�nk mig nincs v�ge a f�jlnak*/
    {
        fgets(line,100,fPointer);/*h�rom param�tert k�r az els� az hogy mibe a m�sodik hogy milyen hossz� �s harmdaik hogy mib�l*/
        puts(line);
    }
    fclose(fPointer);
    return 0;
}
