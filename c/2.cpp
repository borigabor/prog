/*
2.	�rjon olyan f�ggv�nyt vagy met�dust, amely egy term�szetes sz�mr�l eld�nti,
 hogy t�k�letes sz�m-e, vagy sem! (pozit�v oszt�inak �sszege a sz�m k�tszerese)
*/
#include <cstdlib>
#include <iostream>

using namespace std;

int Tokeletes(int szam)
{
	int i,osszeg=0;
	for(i=1;i<=szam/2;i++)
	{
		if(szam % i == 0) osszeg+=i;
	}
	if (osszeg==szam) return 1; else return 0;
}
int main(int argc, char *argv[]) {
	int i;
	for(i=1;i<5000;i++)
	{
		if(Tokeletes(i)==1) cout<<"Tokeletes szam: "<<i<<endl;
	}
system("PAUSE");
return EXIT_SUCCESS;
}
