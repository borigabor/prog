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
    struct Butor adat[8];
    int i;
    int *b_ar;
    int *b_tipus;

    strcpy(adat[0].nev,"Ejjeli szekreny");
    adat[0].ar = 15000;
    adat[0].tipusa = szekreny;

    strcpy(adat[1].nev,"Francia agy");
    adat[1].ar = 125000;
    adat[1].tipusa = agy;

        strcpy(adat[2].nev,"Etkezo asztal");
    adat[2].ar = 49900;
    adat[2].tipusa = asztal;

        strcpy(adat[3].nev,"Komod");
    adat[3].ar = 24900;
    adat[3].tipusa = szekreny;

        strcpy(adat[4].nev,"Kanape");
    adat[4].ar = 39900;
    adat[4].tipusa = szek;

        strcpy(adat[5].nev,"Fotel");
    adat[5].ar = 12000;
    adat[5].tipusa = szek;

        strcpy(adat[6].nev,"Hamuzo asztal");
    adat[6].ar = 65000;
    adat[6].tipusa = asztal;

        strcpy(adat[7].nev,"Kis szekreny");
    adat[7].ar = 33000;
    adat[7].tipusa = szekreny;
    do{
    printf("Add meg a butor tipusat:\n");
    printf("1-asztal 2-szek 3-szekreny 4-agy\n");

    scanf("%i",&b_tipus);
         if(b_tipus < 1 || b_tipus > 4)
     {
         printf("Helytelen tipus!\n");
     }
}while(b_tipus < 1 || b_tipus > 4);
printf("Add meg az arat:");
scanf("%i",&b_ar);
for(i = 0; i < 8; i++)
{
    if(adat[i].tipusa == b_tipus)
    {
        printf("%s\n",adat[i].nev);
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
}
    return 0;
}
