#include <stdio.h>
#include <stdlib.h>
enum boolean{false,true};
struct Felhasznalo
{
   char nev[40];
   char kod[7];
};

int kod(char betu[7])
{
    int i;
    int n = 7;
    srand(time(NULL));
    for(i = 0; i < n; i++)
    {
       char randomletter = 'A'+(rand()%26);
         betu[i] = randomletter;

    return betu;
}
int main()
{
      struct Felhasznalo adat[3];
    char betuk[7];
    int i,j,counter = 0;
    int n = 3;
    int van = true;
    for(i = 0; i < n; i++)
    {

        do{
            van = true;
        printf("Add meg a(z) %i nevet:",i+1);
        fgets(adat[i].nev,40,stdin);
        for(j = 0; j < i; j++)
        {
           if(strcmp(adat[i].nev,adat[j].nev)==0)
           {
               counter++;
           }

           if(counter >= 1){
           van = false;
           counter = 0;
           }
        }
        if(van == false)
        {
            printf("Ez a nev mar egyszer szerepel!\n");
        }
        }while(van == false);

        kod(betuk);
        printf("%s\n",betuk);
    }
    return 0;
}
