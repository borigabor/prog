/*
1.�rjon olyan f�ggv�nyt vagy met�dust, amely egy term�szetes sz�mr�l eld�nti,
hogy pr�msz�m-e, vagy sem!
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int Prim(int szam)
{
	switch(szam)
	{
		case 1 : return 0;
		case 2 : return 0;
	}
	for(int i=3; i<=szam/2; i++)
	{
		if(szam % i == 0) return 0;
	}
	return 1;
}


int main(int argc, char *argv[]) 
{
cout<<Prim(1214)<<endl;
system("PAUSE");
return EXIT_SUCCESS;
}
