/*
9.	�rjon olyan f�ggv�nyt vagy met�dust, amely egy term�szetes sz�mr�l eld�nti, 
hogy a kettes sz�mrendszerbeli fel�r�s�ban a jobbr�l m�sodik bitje 1 vagy 0 
(ne alak�tsa �t sztringg�/ka-raktert�mbb�)!
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
