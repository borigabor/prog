#include <stdio.h>
#include <stdlib.h>


struct Ip
{
    char ip_cim[40];
};

int main()
{
    FILE * fp;
    fp = fopen("szoveg.txt","r");
    int n = 20;
    int m;
    int i = 0;
    int j,db=0,max=0;
    struct Ip adat[n];
    char sor[100];
    while(!feof(fp))
    {
        fscanf(fp,"%s",&sor);
        strcpy(adat[i].ip_cim,sor);
        i++;
    }
    for(i = 0; i < n; i++)
    {
        printf("%s\n",adat[i].ip_cim);
    }
for(i = 0; i < n; i++)
{
    for(j = 0; j < n; j++)
    {
        if(strcmp(adat[i].ip_cim,adat[j].ip_cim)==0)
        {
            db++;
        }
    }
    if(db > max)
    {
        max = db;
        m = i;
    }
    db = 0;
}
printf("A leggyakrabban elofordulo cim: %s",adat[m].ip_cim);
    return 0;
}
