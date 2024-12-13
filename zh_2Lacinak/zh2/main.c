#include <stdio.h>
#include <stdlib.h>

typedef enum{
asztal = 1,szek  ,szekreny  ,agy
}Tipus;

struct Butor{

 char nev[20];
 int ar;
 Tipus tipusa;
};

int main()
{
struct Butor adat[5];
int i;
int j;
int utolso;
int tmp;
int temp;
char seged[40];
int tip;
for(i = 0; i < 5; i++)
{
    printf("Add meg a(z) %i. butor nevet:",i+1);
    fgets(adat[i].nev,20,stdin);

    printf("Add meg a(z) %i. butor arat:",i+1);
    scanf("%i",&adat[i].ar);
do{
     printf("Add meg a(z) %i. butor tipusat:\n",i+1);
     printf("1-asztal 2-szek 3-szekreny 4-agy\n");
     scanf("%i",&adat[i].tipusa);
     if(adat[i].tipusa < 1 || adat[i].tipusa > 4)
     {
         printf("Helytelen tipus!\n");
     }
}while(adat[i].tipusa < 1 || adat[i].tipusa > 4);
 fflush(stdin);

}
for(i = 4; i > 0; i = utolso)
{
    utolso = 0;
    for(j = 0; j < i; j++)
    if(adat[j].ar > adat[j+1].ar)
    {
       tmp = adat[j].ar;
       strcpy(seged,adat[j].nev);
       temp = adat[j].tipusa;
       adat[j].ar = adat[j+1].ar;
       strcpy(adat[j].nev,adat[j+1].nev);
       adat[j].tipusa = adat[j+1].tipusa;
       adat[j+1].ar = tmp;
       strcpy(adat[j+1].nev,seged);
       adat[j+1].tipusa = temp;
       utolso = j;
    }
}
for(i = 0; i < 5; i++)
{
    printf("%s",adat[i].nev);
    printf("%i\n",adat[i].ar);
    if(adat[i].tipusa == 1)
    {
        printf("asztal\n");
    }
       else if(adat[i].tipusa == 2)
    {
        printf("szek\n");
    }
           else if(adat[i].tipusa == 3)
    {
        printf("szekreny\n");
    }
    else{printf("agy\n");}
    printf("\n");

}
    return 0;
}
