#include <stdio.h>
#include <stdlib.h>

struct Autok
{
    char nev[40];
    int max_seb;
};
void rendez(struct Autok tomb[])
{
    FILE * fp;
    fp = fopen("autok.txt", "w");
    int n = 5;
    int i,j,utolso,tmp;
    char seged[40];
    for(i = n - 1; i > 0; i = utolso)
    {
        utolso = 0;
        for(j = 0; j < i; j++)
        if(tomb[j].max_seb < tomb[j+1].max_seb)
        {
            tmp = tomb[j].max_seb;
            strcpy(seged,tomb[j].nev);
            tomb[j].max_seb = tomb[j+1].max_seb;
            strcpy(tomb[j].nev,tomb[j+1].nev);
            tomb[j+1].max_seb = tmp;
            strcpy(tomb[j+1].nev,seged);
            utolso = j;
        }
    }
    for(i = 0; i < 3; i++)
    {
        fprintf(fp,"%s",tomb[i].nev);
        fprintf(fp,"%i\n",tomb[i].max_seb);
    }
    fclose(fp);
}
int valogat(struct Autok tomb[])
{
    int i;
    int n = 5;
    int j = 0;
    struct Autok b[n];
    for(i = 0; i < n; i++)

        if(tomb[i].max_seb > 180)
        {
            strcpy(b[j].nev,tomb[i].nev);
            j++;
        }
    int m = j;
    for(i = 0; i < m; i++)
    {
        printf("%s ",b[i].nev);
    }
}
int main()
{
struct Autok adat[5];
int i;
int *ip;
int max;
char sor[100];
for(i = 0; i < 5; i++)
{
    printf("Add meg a(z) %i. auto nevet:",i+1);
    fgets(adat[i].nev,40,stdin);

    printf("Add meg a(z) %i. auto vegsebesseget:",i+1);
    scanf("%i",&adat[i].max_seb);
    fflush(stdin);
}
rendez(adat);
printf("\nGyorsabb 180km/h:\n");
valogat(adat);
max = adat[0].max_seb;
for(i = 0; i < 5; i++)
{
    if(adat[i].max_seb >max)
    {
        max = adat[i].max_seb;
    }
}
ip = &max;
printf("A leggyorsabb auto vegsebessege:%i",*ip);

int i;

int j = 0;
int n = 5;
struct Autok b[n];
for(i = 0; i < n; i++)

    if(tomb[j] > 180)
    {
        strcpy(b[j],tomb[i]);
        j++
    }
int m = j;
    return 0;
}
