/*
30.	Írjon függvényt vagy metódust, mely pozitív egész paraméterét fordítva 
adja vissza, pl. fordit(234) eredménye 432! (a megoldás során ne használjon 
sztringeket/karaktertömböket)
*/

#include <cstdlib>
#include <iostream>
#define HOSSZ 28
using namespace std;

int fordit(int szam)
{
     int m=0;
     while(szam>0)
      {
        m=m*10+(szam%10);
        szam=(int)(szam/10);
      }   
      return m;
}

int main(int argc, char *argv[])
{ 
    cout << fordit(123)<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
