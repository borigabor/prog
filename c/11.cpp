/*
11.	�rjon olyan f�ggv�nyt vagy met�dust, amely a param�ter�ben megadott 
term�szetes sz�m pozit�v oszt�inak sz�m�val t�r vissza!
*/
#include <cstdlib>
#include <iostream>

using namespace std;

int osztok(int szam)
{
    int oszto=0;
 for(int i=1;i<=szam;i++) if(szam%i==0) oszto++;
 return oszto;
}

int main(int argc, char *argv[])
{

cout << osztok(100);
system("PAUSE");
return EXIT_SUCCESS;
}
