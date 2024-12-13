/*
21.	Adjon olyan metódust vagy függvényt, ami eldönti, hogy a paramétereként
megadott (pozitív egészekből álló) nemüres tömbben van-e olyan szám,
ami az összes többit osztja. (Maradékszámító függvény használható).
*/

#include <cstdlib>
#include <iostream>
#include <time.h>

using namespace std;

bool eldont(int t[], int N)
{
    for(int i=0;i<N;i++)
    {
        bool ok=true;
        for(int j=0;j<N;j++)
        {
            if(t[j] % t[i] != 0)
                ok=false;
        }
        if(ok)
            return true;
    }
    return false;
}
int main(int argc, char *argv[])
{
    int tomb[3]={3,4,5};
    cout<<eldont(tomb,3)<<endl;
    return 1;
}
