/*
27.	Írjon függvényt vagy metódust, mely visszaadja két egész paramétere 
szorzatának balról második számjegyét! 
(a megoldás során ne használjon sztringeket/karaktertömböket)
*/

#include <cstdlib>
#include <iostream>
#define HOSSZ 28
using namespace std;

int vissza(int a,int b)
{
 int szam = a*b;
 int szamjegyek=0;
 while(szam>100)
 {
   szam=szam/10;          
 }   
 return szam%10;
}

int main(int argc, char *argv[])
{
    cout << vissza(456,654)<<endl;   
    system("PAUSE");
    return EXIT_SUCCESS;
}
