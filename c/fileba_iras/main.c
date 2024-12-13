#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fpointer; /* fájl mutató*/
    fpointer = fopen("alma.txt","w"); /*elsõ paramétert mit második hogy mit csináljunk vele (w - write)(r olvasás)(a hozzáfûzés)*/
    fprintf(fpointer, "Szeretem a barackot mert finom!\n"); /* ezzel a a függvényel tudunk fájlba irni 2 paramétere van az elsõ hogy mibe a msáodik hogy mit*/
    fclose(fpointer); /* ha nem akarunk mást beleirní bezárjuk a filet*/

    return 0;
}
