#include <iostream>
/*Mem�riakezel�s*/
using namespace std;

int main()
{
    int a= 5, b = 6;
    int *pA=&a, *pB=&b; // csilagot b�rhova pakolhatom;
    cout<<"Az a valtozo erteke: "<<*pA<<" es a cime: "<<&pA<<endl;
    cout<<"Az a valtozo erteke: "<<*pB<<" es a cime: "<<&pB<<endl;
   /* int b;
    int* pB = NULL; // null pointer(nem mutat sehova)
    int a = 5;
    int* pA = &a; //MUTAT� integer tipusu v�ltoz� mem�rie cim�t t�rolja
    cout<<"Az a valtozo erteke: "<<*pA<<" es a cime: "<<&pA<<endl; //*pA az a �rt�ke &pA mem�riac�me
   cout<<a<<endl;
    {
        int a = 2;
        cout<<*pA<<endl;
    }
    cout<<a<<endl;*/
    return 0;
}
