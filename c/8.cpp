/*
8.	Írjon olyan függvényt vagy metódust, amely egy természetes szám esetén 
kiírja, hogy a 9-es számjegybOl hány darabot tartalmaz 
(ne alakítsa át sztringgé/karaktertömbbé)!
*/

#include <cstdlib>
#include <iostream>

using namespace std;
      int mennyi(int szam)
      {
          int maradek;
          int db=0;
          while(szam>0)
          {
            maradek=szam%10;           
            szam=szam/10;
            if(maradek==9) db++;
          }   
          return db;
          
          
      }


    int main(int argc, char *argv[])
    {
     cout<< mennyi(988999) << endl;
        system("PAUSE");
        return EXIT_SUCCESS;
    }
