#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*Készíts függvényt, ami visszadja a paraméteréül kapott számhoz a legközelebbi prímszámot!*/

int prim(int szam){
int oszto = 0;
      int eredet = szam;
      int i;
      int n = 1;
      bool a = true;

while(oszto != 2){
    oszto = 0;
      for(i = 1; i <= szam; i++)
      {
          if(szam % i == 0)
          {
              oszto++;
          }
      }
if(oszto != 2 && a == true)
{
    szam = szam - n;
    n++;
    a = false;

}
else if(oszto != 2 && a == false)
{
    szam = szam + n;
    n++;
    a = true;
}
}
printf("%i",szam);
return szam;
}
int main()
{

prim(20);
    return 0;
}
