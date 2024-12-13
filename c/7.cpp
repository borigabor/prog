/*
7.	Írjon olyan függvényt vagy metódust, amely egy természetes számhoz
visszaadja azt a legnagyobb egész kitevős hatványát, amely még éppen kisebb,
mint 567!
*/
#include <cstdlib>
#include <iostream>

using namespace std;

int ekh(int szam)
{
    int hatvany=szam,kitevo=0;
    while(hatvany*szam<567)
    {
        kitevo++;
        hatvany*=szam;
    }
    return (kitevo>0 ? hatvany : 0);
}
int main(int argc, char *argv[])
{
    cout<<ekh(5)<<endl;
    return 1;
}
