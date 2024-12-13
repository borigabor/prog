#include <stdio.h>
#include <stdlib.h>

int main()
{
char x;
int db = 0;
while(x != '*' && db < 10)
{
    db++;
    printf("Add meg a(z) %i. karaktert:",db);
    scanf("%c",&x);
    fflush(stdin);
    if(x >= 'a' && x <='z')
    {
        printf("*\n");
    }
    else{printf("%c\n",x);}
}
    return 0;
}
