/*
23.	Adjon olyan metódust vagy függvényt, ami visszaadja, hogy a
paramétereként megadott (pozitív egészekbol álló) nemüres tömbben
melyik index az, ahol a leghosszabb folyamatosan növekvo részsorozat kezdodik.
Ha több ilyen index is van, az utolsót adja vissza.
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
