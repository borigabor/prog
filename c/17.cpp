/*
17.	�rjon olyan f�ggv�nyt vagy met�dust, amely ki�rja az angol 
kisbetus �b�c� azon betut, melyek ASCII k�dja n�gyzetsz�m!
*/

#include <cstdlib>
#include <iostream>

using namespace std;

void negyzet()
{
     char kezdo='a';
     char veg='z';
     for(int i=kezdo;i<=veg;i++)
     {
      for(int j=1;j<15;j++)
        if(i==j*j) cout<<(char)i<<endl;
      }
}

int main(int argc, char *argv[])
{
negyzet();
system("PAUSE");
return EXIT_SUCCESS;
}
