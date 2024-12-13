/*
23.	Adjon olyan met�dust vagy f�ggv�nyt, ami visszaadja, hogy a
param�terek�nt megadott (pozit�v eg�szekbol �ll�) nem�res t�mbben
melyik index az, ahol a leghosszabb folyamatosan n�vekvo r�szsorozat kezdodik.
Ha t�bb ilyen index is van, az utols�t adja vissza.
*/

#include <cstdlib>
#include <iostream>
#define HOSSZ 28
using namespace std;

int sorozat(int t[])
{
 int index=0;
    int hossz=0;
    for(int i=0;i<HOSSZ-1;i++)
    {
        int db=0,j=i+1;
        while(t[j] > t[i] && j<HOSSZ)
        {
            db++;
            j++;
        }
        if(db>=hossz)
        {
            index=i;
            hossz=db;
        }
    }
    return index;
}
int main(int argc, char *argv[])
{
    int tomb[HOSSZ]={1,2,3,4,5,1,2,3,4,1,2,3,4,5,6,7,1,2,3,4,5,6,1,2,3,4,5,6};
    cout<<sorozat(tomb)<<" indexnel kezdodik "<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
