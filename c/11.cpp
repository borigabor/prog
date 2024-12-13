/*
11.	Írjon olyan függvényt vagy metódust, amely a paraméterében megadott 
természetes szám pozitív osztóinak számával tér vissza!
*/
#include <cstdlib>
#include <iostream>

using namespace std;

int osztok(int szam)
{
    int oszto=0;
 for(int i=1;i<=szam;i++) if(szam%i==0) oszto++;
 return oszto;
}

int main(int argc, char *argv[])
{

cout << osztok(100);
system("PAUSE");
return EXIT_SUCCESS;
}
