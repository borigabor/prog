/*
18.	�rjon olyan f�ggv�nyt vagy met�dust, amely elo�ll�t
 egy 5 karakterbol (angol kisbetus �b�c� karaktereit haszn�lva) 
 �ll� v�letlen karakterl�ncot vagy sztringet! Biztos�tsa,
 hogy minden 5 hossz� k�l�nb�zo betukbol �ll� sztring egyenlo
 val�sz�nus�ggel ker�lj�n kiv�laszt�sra, felt�ve, hogy a 
 v�lasztott programoz�si nyelv v�letlensz�m-gener�tora 
 egyenletes eloszl�st biztos�t!
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
