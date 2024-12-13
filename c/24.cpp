/*
24.	Adjon olyan metódust vagy függvényt, ami visszaadja, hogy a
paramétereként megadott (pozitív egészekbol álló) nemüres tömbben
melyik az a legkisebb index, amire az index elotti elemek összege
meghaladja a tömb elso két elemének szorzatát. Ha nincs ilyen,
0-t adjon vissza.
*/

#include <cstdlib>
#include <iostream>
#define HOSSZ 28
using namespace std;

int szamol(int tomb[])
{
 int osszeg=tomb[0]+tomb[1];
 int szorzat=tomb[0]*tomb[1];
 for(int i=2;i<HOSSZ;i++)
 {
      osszeg+=tomb[i]; 
      if(osszeg>szorzat) return i;   
 }   
 return 0;
}
int main(int argc, char *argv[])
{
    int tomb[HOSSZ]={5,5,2,2,2,2,2,2,0,0,0,2,2,2,2,2,1,2,3,4,5,6,1,2,3,4,5,6};
    cout<<szamol(tomb)<<" indexu elem"<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
