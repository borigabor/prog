#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fpointer; /* f�jl mutat�*/
    fpointer = fopen("alma.txt","w"); /*els� param�tert mit m�sodik hogy mit csin�ljunk vele (w - write)(r olvas�s)(a hozz�f�z�s)*/
    fprintf(fpointer, "Szeretem a barackot mert finom!\n"); /* ezzel a a f�ggv�nyel tudunk f�jlba irni 2 param�tere van az els� hogy mibe a ms�odik hogy mit*/
    fclose(fpointer); /* ha nem akarunk m�st beleirn� bez�rjuk a filet*/

    return 0;
}
