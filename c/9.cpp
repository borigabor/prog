/*
9.	Írjon olyan függvényt vagy metódust, amely egy természetes számról eldönti, 
hogy a kettes számrendszerbeli felírásában a jobbról második bitje 1 vagy 0 
(ne alakítsa át sztringgé/ka-raktertömbbé)!
*/
#include <cstdlib>
#include <iostream>

using namespace std;

    int eldonti(int szam)
    {
       int b=(szam/2)%2;
       cout<<"Jobbrol a masodik bitje: "<<b<<endl;
       return 0; 
    }

    int main(int argc, char *argv[])
    {
        int szam = 4;
        eldonti(szam);
        system("PAUSE");
        return EXIT_SUCCESS;
    }
