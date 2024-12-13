#include <stdio.h>
#include <stdlib.h>

int main()
{
char nev[10];
int i = 0;
int db = 0;


printf("Add meg a szoveget betunkent!\n");

while(i < 10)
{
    i++;
do{
    printf("%i. betu:",i+1);
    scanf("%c",&nev[i-1]);
    fflush(stdin);

    if(nev[i]==' ')
    {
        db++;
        i--;
    }
    if(db > 1 || nev[i]==' ')
    {
        printf("Nem szerepelhet tobb szokoz!\n");
    }

}while(db > 1 || nev[i]==' ');
}
printf("A nev monogramja:\n");

for(i = 0; i < 10; i++)
{
    if(nev[i]==' ')
    {
        printf("%c %c",nev[0],nev[i+1]);
    }

}

    return 0;
}
