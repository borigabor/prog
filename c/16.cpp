/*
16. Irjon olyan fuggvenyt vagy metodust, amely megszamolja egy adott
karakterlanc vagy sztring osszes elofordulasat egy masik karakterlancban
vagy sztringben!
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int keres(string mit,string miben)
{

             int talal=0;
 for(int i=0;i<miben.size();i++)
 {
         int t=0;
   if(miben[i]==mit[0])
                       for(int j=1;j<mit.size();j++)
                       {
                               if(miben[i+j]==mit[j]) t++;
                       }
   if(t==mit.size()-1) talal++;
 }
 return talal;
}

int main(int argc, char *argv[])
{
cout<<keres("ezt","ebben ezt keresem ezt es eztet")<<endl;
system("PAUSE");
return EXIT_SUCCESS;
}
