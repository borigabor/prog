/*
10.	�rjon olyan f�ggv�nyt vagy met�dust, amelynek param�tere egy 1 < x < 10
term�szetes sz�m, �s ki�rja az 1,3,4,6,7,9,10,12,... sorozat elsO �t x-szel
oszthat� elem�t, azaz a sorozat i+1-edik tagja 2-vel nagyobb az i-edikn�l,
ha i p�ratlan, s eggyel nagyobb az i-edikn�l, ha i p�ros!
*/
#include <cstdlib>
#include <iostream>

using namespace std;


int sor(int szam)
{
int sor=0;
int tag=0;
int kiir=0;
while(kiir<5)
{
if(tag%2==0) sor=sor+1; else sor=sor+2;
if(sor%szam==0) {kiir++; cout<<endl<<sor;}
tag++;
}
}



int main(int argc, char *argv[])
{
sor(9);
system("PAUSE");
return EXIT_SUCCESS;
}
