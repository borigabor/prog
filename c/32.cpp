/*
32.	�rjon f�ggv�nyt vagy met�dust, mely visszaadja, hogy k-t�l m-ig h�ny
 olyan sz�m van, melyeknek n db val�di oszt�ja van! (n, k �s m param�ter).
*/

#include <windows.h>
#include <cstdlib>
#include <iostream>
#define HOSSZ 28
using namespace std;

int valosak(int k,int m, int n)
{
  int mettol,meddig,oszto;
  int db=0;
  if(k<=m) {mettol=k; meddig=m;} else {mettol=m; meddig=k;}
    
    for(int i=mettol;i<=meddig;i++)
    {
            oszto=0;
            for(int j=2;j<=i/2;j++)
            {
              if(i%j==0) oszto++;      
            }
            if(oszto==n) db++;
    }
    return db;
}

int main(int argc, char *argv[])
{     
      cout<<valosak(2,80,4)<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
