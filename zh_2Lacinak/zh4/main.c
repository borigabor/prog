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
    int b_ar;

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
    FILE * fp;
    fp = fopen("butor.dat","wb");
    for(i = 0; i < 8; i++)
    {
    fprintf(fp,"%s\n",adat[i].nev);
    fprintf(fp,"%i\n",adat[i].ar);
    if(adat[i].tipusa == 1)
    {
        fprintf(fp,"asztal\n");
    }
       else if(adat[i].tipusa == 2)
    {
        fprintf(fp,"szek\n");
    }
           else if(adat[i].tipusa == 3)
    {
        fprintf(fp,"szekreny\n");
    }
    else{fprintf(fp,"agy\n");}

    }
    fclose(fp);
    fp = fopen("butor.dat","rw");
    char sor[100];
     while(!feof(fp))
    {
        fgets(sor,100,fp);
        puts(sor);

    }
    fclose(fp);
    printf("Add meg az arat:");
    scanf("%i",&b_ar);
    for(i = 0; i < 8; i++)
    {
        if(adat[i].ar < b_ar)
        {
            printf("%s\n",adat[i].nev);
            printf("%i\n",adat[i].ar);

        }
    }
    return 0;
}
