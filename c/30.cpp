/*
30.	�rjon f�ggv�nyt vagy met�dust, mely pozit�v eg�sz param�ter�t ford�tva 
adja vissza, pl. fordit(234) eredm�nye 432! (a megold�s sor�n ne haszn�ljon 
sztringeket/karaktert�mb�ket)
*/

#include <cstdlib>
#include <iostream>
#define HOSSZ 28
using namespace std;

int fordit(int szam)
{
     int m=0;
     while(szam>0)
      {
        m=m*10+(szam%10);
        szam=(int)(szam/10);
      }   
      return m;
}

int main(int argc, char *argv[])
{ 
    cout << fordit(123)<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
