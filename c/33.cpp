/*
33.	�rjon f�ggv�nyt vagy met�dust, mely visszaadja, hogy k�t pozit�v eg�sz 
param�ter�nek legkisebb k�z�s t�bbsz�r�se h�ny sz�mjegybol �ll kettes 
sz�mrendszerben.
*/


#include <windows.h>
#include <cstdlib>
#include <iostream>
#define HOSSZ 28
#include<math.h>
using namespace std;

int lkkt(int szam1, int szam2) {
        int x, y, lkkt, db = 0;
        x = szam1;
        y = szam2;
        while (x != y) {
            if (x < y) {
                x += szam1;
            } else if (x > y) {
                y += szam2;
            }
        }
        lkkt = x;
        while (lkkt > 0) {
            lkkt /= 2;
            db++;
        }
        return db;
    }

int main(int argc, char *argv[])
{    
     cout<<"LKKT: "<<lkkt(100,200)<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
