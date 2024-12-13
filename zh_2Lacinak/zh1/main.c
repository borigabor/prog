#include <stdio.h>
#include <stdlib.h>

/*K�sz�ts f�ggv�nyt ami a param�terk�nt kapott sz�vegb�l visszadja, hogy h�ny �r�sjelet(.?!)tartalmaz,
c�m szerinti param�terben pedig visszadja, hogy els� ilyen h�nyadik pozici�ban tal�lhat�.(0-t�l kezd�d�en, ha nincs benne: -1)*/

int irasjel(char szoveg[], int n)
{
    int db = 0;
    int i;
    for(i = 0; i < n; i++)
    {
        if(szoveg[i] == '.' || szoveg[i] == '!' || szoveg[i] == '?')
        {
            db++;
        }
    }
    return db;
}

void pozicio(char szoveg[], int n)
{
    int db = 0;
    int i;
    int m = -1;
    for(i = 0; i < n; i++)
    {
        if(szoveg[i] == '.' || szoveg[i] == '!' || szoveg[i] == '?')
        {
            db++;
           if(db == 1)
           {
               m = i;
           }
        }
    }
   printf("%i a pozicioja!",m);
}

int main()
{
    char szoveg[100];
    printf("Add meg a szoveget:\n");
    fgets(szoveg,100,stdin);
   printf("%i ",irasjel(szoveg,100));
   printf("\n");
   pozicio(szoveg,100);
    return 0;
}
