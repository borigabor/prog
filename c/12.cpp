/*
12.	�rjon olyan f�ggv�nyt vagy met�dust, amely egy karakterl�ncb�l vagy
sztringbol a sz�mjegyek kiv�tel�vel minden karaktert elt�vol�t!
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

cout<<stringto("12.	�rjon olyan f�ggv�nyt vagy met�dust, amely egy karakterl�ncb6�l 345vagfy");
system("PAUSE");
return EXIT_SUCCESS;
}
