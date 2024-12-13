#include <iostream>
/*Memóriakezelés*/
using namespace std;

int main()
{
    int a= 5, b = 6;
    int *pA=&a, *pB=&b; // csilagot bárhova pakolhatom;
    cout<<"Az a valtozo erteke: "<<*pA<<" es a cime: "<<&pA<<endl;
    cout<<"Az a valtozo erteke: "<<*pB<<" es a cime: "<<&pB<<endl;
   /* int b;
    int* pB = NULL; // null pointer(nem mutat sehova)
    int a = 5;
    int* pA = &a; //MUTATÓ integer tipusu változó memórie cimét tárolja
    cout<<"Az a valtozo erteke: "<<*pA<<" es a cime: "<<&pA<<endl; //*pA az a értéke &pA memóriacíme
   cout<<a<<endl;
    {
        int a = 2;
        cout<<*pA<<endl;
    }
    cout<<a<<endl;*/
    return 0;
}
