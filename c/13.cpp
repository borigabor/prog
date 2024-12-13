/*
13.	Írjon olyan függvényt vagy metódust, amely egy karakterláncról vagy 
sztringrol eldönti, hogy palindróma-e! 
(Balról olvasva ugyanaz, mint jobbról olvasva.)
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int palindrom(string s)
{
    int last=(s.size()-1);
     for(int i=0;i<=last;i++)
     {
             if( s[i]!=s[last-i] ) return 0;      
     }
     return 1;    
}

int main(int argc, char *argv[])
{
cout<<palindrom("cacauiacac")<<endl;
system("PAUSE");
return EXIT_SUCCESS;
}
