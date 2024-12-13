/*
22.	Adjon olyan metódust vagy függvényt, ami eldönti, hogy a paramétereként
megadott (pozitív egészekbol álló) nemüres tömbben van-e olyan szám,
ami az összes többinél többször fordul elo.
*/
#include <cstdlib>
#include <iostream>

using namespace std;

bool eldont(int t[], int N)
{
    int szam=0;
    int db=0;
    int ism=0;
    for(int i=0;i<N;i++)
    {
        int sd=0;
        for(int j=0;j<N;j++)
        {
            if(t[j] == t[i])
                sd++;
        }
        if(sd>db)
        {
            ism=0;
            szam=t[i];
            db=sd;
        }
        else if(sd==db && szam!=t[i])
            ism++;
    }
    return (ism==0 ? 1 : 0);
}
int main(int argc, char *argv[])
{
    int tomb[10]={5,5,4,3,3,3,2,2,1,1};
    cout<<eldont(tomb,10)<<endl;
    return 1;
}
