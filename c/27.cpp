/*
27.	�rjon f�ggv�nyt vagy met�dust, mely visszaadja k�t eg�sz param�tere 
szorzat�nak balr�l m�sodik sz�mjegy�t! 
(a megold�s sor�n ne haszn�ljon sztringeket/karaktert�mb�ket)
*/

#include <cstdlib>
#include <iostream>
#define HOSSZ 28
using namespace std;

int vissza(int a,int b)
{
 int szam = a*b;
 int szamjegyek=0;
 while(szam>100)
 {
   szam=szam/10;          
 }   
 return szam%10;
}

int main(int argc, char *argv[])
{
    cout << vissza(456,654)<<endl;   
    system("PAUSE");
    return EXIT_SUCCESS;
}
