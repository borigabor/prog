/*
20.	Adjon olyan f�ggv�nyt vagy met�dust, ami adott k�t pozit�v eg�sz 
param�tere eset�n megadja (n alatt a k)=n!/k!(n-k)! �rt�k�t. 
Haszn�ljon rekurzi�t!
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
