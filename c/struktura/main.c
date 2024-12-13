#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Ember
{
    char nev[40];
    int eletkor;
    char lakhely[40];
};
int main()
{
  struct Ember ember1;
  struct Ember ember2;

 strcpy(ember1.nev, "Andras");
 ember1.eletkor = 19;
 strcpy(ember1.lakhely, "Nyiregyhaza");

 strcpy(ember2.nev, "Gabor");
 ember2.eletkor = 22;
 strcpy(ember2.lakhely, "Kemecse");

  printf("Neve:%s",ember1.nev);
  printf("\nEletkor:%i",ember1.eletkor);
  printf("\nLakhely:%s",ember1.lakhely);

  printf("\nNeve:%s",ember2.nev);
  printf("\nEletkor:%i",ember2.eletkor);
  printf("\nLakhely:%s",ember2.lakhely);
    return 0;
}
