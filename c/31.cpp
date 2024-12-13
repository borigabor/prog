/*
31.	Írjon függvényt vagy metódust, mely a paraméterként kapott 10x10-es
mátrixról eldönti, hogy van-e olyan eleme, mely sorában nagyobb és
oszlopában pedig kisebb a többi elemnél!
*/
#include <windows.h>
#include <cstdlib>
#include <iostream>
#define HOSSZ 28
using namespace std;

bool matrix(int t[10][10])
{
  bool sor;
  bool oszlop;
  for(int i=0;i<10;i++)
  for(int j=0;j<10;j++)
  {
   sor=true;
   oszlop=true;
   for(int x=0;x<10;x++)
   if(i!=x) //oszlop
   { 
     if(t[x][j]<=t[i][j]) {oszlop=false;  break;  }              
   } 
   for(int y=0;y<10;y++) //sor
   if(j!=y)
   {
     if(t[i][y]>=t[i][j]) {sor=false;  break; }             
   }        
   if(oszlop && sor) return true;
  }  
  return false; 
}

int main(int argc, char *argv[])
{     int tomb[10][10]={

   {8,9,4,2,6,7,0,3,7,1},  //1
   {7,6,1,3,9,9,6,7,8,9},  //2
   {2,5,3,1,9,6,5,4,7,1},  //3
   {6,5,7,1,8,8,9,5,6,4},  //4
   {7,9,8,2,5,6,8,6,7,1},  //5
   {3,4,5,6,7,7,2,8,7,1},  //6
   {3,2,0,4,4,5,4,2,3,4},  //7  //5 -os elem, a 7.sor 6.oszlop
   {0,9,1,6,5,6,9,0,6,1},  //8
   {7,5,4,9,0,8,6,7,8,5},  //9
   {4,9,0,7,5,9,9,7,6,0},  //10
  //1.2.3.4.5.6.7.8.9.10  
  }; 
  cout << matrix(tomb)<<endl;;
    system("PAUSE");
    return EXIT_SUCCESS;
}
