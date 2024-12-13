/*
14.	Írjon olyan függvényt vagy metódust, amely egy, az angol ábécé betuit
tartalmazó karakterláncban vagy sztringben minden szó kezdőbetűjét nagybetűre alakítja!
*/

#include <cstdlib>
#include <iostream>

using namespace std;

void alakit(string& s)
{
if(s[0]>='a'&& s[0]<='z')
    s[0]=s[0]-32;
for(int i=0;i<s.size();i++)
{
    if(s[i]==' ')
        if(s[i+1]>='a' && s[i+1]<='z')
            s[i+1]-=32;
}
    cout<<s;
}
int main(int argc, char *argv[])
{
    string b="irjon olyan fuggvenyt vagy metodust, amely egy, az angol abc betuit tartalmazo karakterlancban vagy sztringben minden szo kezdobetujet nagybeture alakitja!";
    alakit(b);
    return 1;
}
