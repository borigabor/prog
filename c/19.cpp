/*
19.	�rjon olyan f�ggv�nyt vagy met�dust, amely egy karakterl�ncba vagy
sztringbe besz�r egy "a" karaktert v�letlen�l v�lasztott poz�ci�ba
(v�letlensz�m-gener�tor haszn�lhat�)!
*/

#include <cstdlib>
#include <iostream>
#include <time.h>

using namespace std;


string besszur(char k, string s)
{
       srand(time(NULL));
 string temp = s;
 int poz = rand() % s.size();
 temp.resize(s.size()+1);
   for(int i = temp.size();i>poz;i--)
   {
           temp[i]=temp[i-1];
   } 
   temp[poz]=k;
   return temp;
}

int main(int argc, char *argv[])
{
string s = "Beszuros";
s=besszur('X',s);
cout << s << endl;

system("PAUSE");
return EXIT_SUCCESS;
}
