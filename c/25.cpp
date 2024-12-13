/*
25.	Adjon egy metódust vagy függvényt, ami paraméterként adott 
s sztring/karaktertömb, c karakter és n pozitív egész szám esetén
megadja, hogy a c karakter n-edik elofordulása hányadik pozíción
van az "s" sztringben.
*/

#include <cstdlib>
#include <iostream>
#define HOSSZ 28
using namespace std;

int keres(string s,char c,int n)
{
    int db=0;
    for(int i=0;i<s.size();i++)
    {
     if(s[i]==c) 
     {
       db++;          
     }
     if(db==n) return i;       
    }
    return -1;
}
int main(int argc, char *argv[])
{
    string s = "Keresem az e betut!";
    cout<<keres(s,'e',2)<<" indexu elem"<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
