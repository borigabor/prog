/*
8.	�rjon olyan f�ggv�nyt vagy met�dust, amely egy term�szetes sz�m eset�n 
ki�rja, hogy a 9-es sz�mjegybOl h�ny darabot tartalmaz 
(ne alak�tsa �t sztringg�/karaktert�mbb�)!
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
