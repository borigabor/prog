/*
20.	Adjon olyan függvényt vagy metódust, ami adott két pozitív egész 
paramétere esetén megadja (n alatt a k)=n!/k!(n-k)! értékét. 
Használjon rekurziót!
*/
#include <cstdlib>
#include <iostream>
#include <time.h>

using namespace std;


int fk(int n)
{
if(n>1)return n*fk(n-1);    
else return 1;       
}

int nk(int n,int k)
{
  return (fk(n)/(fk(k)*fk(n-k)));
}

int main(int argc, char *argv[])
{
cout << nk(10,5) << endl;

system("PAUSE");
return EXIT_SUCCESS;
}
