/*
28.	�rjon f�ggv�nyt vagy met�dust, mely eld�nti, hogy a param�terk�nt kapott
5x5-�s /karakterekbol �ll�/ t�mbben a fo�tl�ban van-e olyan elem,
mely a fo�tl�n k�v�l is megjelenik a t�mbben!
*/

#include <cstdlib>
#include <iostream>
#define HOSSZ 28
using namespace std;

bool atlo(char t[5][5])
{
     for(int i=0;i<5;i++)
      for(int j=0;j<5;j++)
      {
        if(i!=j)
        for(int k=0;k<5;k++)
                {
                  if(t[i][j]==t[k][k]) return true;        
                }      
      }
      return false;
}

int main(int argc, char *argv[])
{
char A[5][5] = {
	   {'a','f','g','h','i'},
       {'j','b','k','l','m'},
       {'n','o','c','p','q'},
       {'r','s','t','d','z'},
       {'v','x','y','x','e'}}; 
       cout << atlo(A);
    system("PAUSE");
    return EXIT_SUCCESS;
}
