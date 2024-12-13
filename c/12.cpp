/*
12.	Írjon olyan függvényt vagy metódust, amely egy karakterláncból vagy
sztringbol a számjegyek kivételével minden karaktert eltávolít!
*/
#include <cstdlib>
#include <iostream>

using namespace std;

string stringto(string szoveg)
{
    string temp;
    int j=0;
    temp.resize(szoveg.size());
     for(int i=0;i<szoveg.size();i++)

             if (szoveg[i]>='1' && szoveg[i]<='9')
             {
                 temp[j]=szoveg[i];j++;
             }

             temp.resize(j);

return temp;
}
int main(int argc, char *argv[])
{

cout<<stringto("12.	Írjon olyan függvényt vagy metódust, amely egy karakterláncb6ól 345vagfy");
system("PAUSE");
return EXIT_SUCCESS;
}
