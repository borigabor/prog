/*
15.	�rjon olyan f�ggv�nyt vagy met�dust, amely egy karakterl�ncb�l vagy
sztringbol elt�vol�tja egy megadott karakter �sszes elofordul�s�t!
*/

#include <cstdlib>
#include <iostream>

using namespace std;

string s="Szevasz Tavasz";
void eltuntet(char mit)
{
    int db=0;
    string uj;
    uj.resize(s.size());
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=mit)
        {
            uj[db]=s[i];
            db++;
        }
    }
    uj.resize(db);
    s=uj;
}
int main(int argc, char *argv[])
{
    cout<<s<<endl;
    eltuntet('a');
    cout<<s<<endl;
    return 1;
}
