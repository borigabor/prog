/*
29.	�rjon f�ggv�nyt vagy met�dust, mely val�s t�pus� param�ter�nek azt a
sz�mjegy�t adja vissza, amelyik a tizedes pont ut�n �ll!
(a megold�s sor�n ne haszn�ljon sztringeket/karaktert�mb�ket)
*/


#include <cstdlib>
#include <iostream>
#define HOSSZ 28
using namespace std;

int visszad(float szam)
{
     szam=szam-(int)szam;
     return int(szam*10);
}

int main(int argc, char *argv[])
{
    cout << visszad(567.8967);
    system("PAUSE");
    return EXIT_SUCCESS;
}
