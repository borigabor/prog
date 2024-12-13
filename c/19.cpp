/*
19.	Írjon olyan függvényt vagy metódust, amely egy karakterláncba vagy
sztringbe beszúr egy "a" karaktert véletlenül választott pozícióba
(véletlenszám-generátor használható)!
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
