/*
26.	Adjon metódust vagy függvényt, ami a paraméterként kapott,
egészekbol álló rendezett tömbben a tömb hosszának logaritmusával
arányos lépésszám alatt megkeresi a paraméterként kapott egész elso
elofordulásának indexét, illetve ha nincs ilyen, akkor -1-et ad vissza.
(pl. a bináris keresés)
*/

#include <cstdlib>
#include <iostream>
#define HOSSZ 28
using namespace std;

int keres(int n,int tomb[],int k)
{
    int u=1;
    int v=n; 
    int i;
    bool megvan=false;
    while(u<=v)
    {
          i = (u+v)/2;
          if (tomb[i]==k) return i;
          if(tomb[i]<k) u++;
          if(tomb[i]>k) v--;
    }
    return -1;
}

int main(int argc, char *argv[])
{
 int tomb[30]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    int x=20;
    cout << keres(30,tomb,x)<<endl;   
    system("PAUSE");
    return EXIT_SUCCESS;
}
