/*
18.	Írjon olyan függvényt vagy metódust, amely eloállít
 egy 5 karakterbol (angol kisbetus ábécé karaktereit használva) 
 álló véletlen karakterláncot vagy sztringet! Biztosítsa,
 hogy minden 5 hosszú különbözo betukbol álló sztring egyenlo
 valószínuséggel kerüljön kiválasztásra, feltéve, hogy a 
 választott programozási nyelv véletlenszám-generátora 
 egyenletes eloszlást biztosít!
*/

#include <cstdlib>
#include <iostream>
#include <time.h>

using namespace std;


bool hasznalhato(string h,char b)
{
     for(int i=0;i<h.size();i++)
     {
         if(h[i]==b) return false;
     }
     return true;
}

     
string general()
{
 srand((unsigned)time(NULL));
 string hasznalt="";
 string szo="";
 char randombetu;
 szo.resize(5);
 hasznalt.resize(5);
 for(int i=0;i<5;i++)
 {
 do
 {
  randombetu=rand()%25+97;     

 }while(!hasznalhato(hasznalt,randombetu));
 hasznalt=randombetu;
 szo[i]=randombetu;
  cout << szo[i] << endl;
}  
return szo;   
}

int main(int argc, char *argv[])
{
string s = general();
cout << s;
system("PAUSE");
return EXIT_SUCCESS;
}
