/*
3.	�rjon olyan f�ggv�nyt vagy met�dust, amely egy karakterl�ncban
vagy sztringben v�letlenszeruen �sszekeveri a karaktereket
(v�letlensz�m-gener�tor haszn�lhat�)!
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;


string kever(string szoveg)
{   srand(time(0));
	char temp;
	for(int i = 0 ; i<szoveg.size(); i++)
	{
		int random = rand() % szoveg.size();
		temp=szoveg[i];
		szoveg[i] = szoveg[random];
		szoveg[random] = temp;
	}
	return szoveg;
}

int main(int argc, char *argv[]) {
	string asd = "Ezt";
	asd = kever(asd);
	cout <<asd;
system("PAUSE");
return EXIT_SUCCESS;
}
