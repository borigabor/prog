/*
17.	Írjon olyan függvényt vagy metódust, amely kiírja az angol 
kisbetus ábécé azon betut, melyek ASCII kódja négyzetszám!
*/

#include <cstdlib>
#include <iostream>

using namespace std;

void negyzet()
{
     char kezdo='a';
     char veg='z';
     for(int i=kezdo;i<=veg;i++)
     {
      for(int j=1;j<15;j++)
        if(i==j*j) cout<<(char)i<<endl;
      }
}

int main(int argc, char *argv[])
{
negyzet();
system("PAUSE");
return EXIT_SUCCESS;
}
