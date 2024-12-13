/*
29.	Írjon függvényt vagy metódust, mely valós típusú paraméterének azt a
számjegyét adja vissza, amelyik a tizedes pont után áll!
(a megoldás során ne használjon sztringeket/karaktertömböket)
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
