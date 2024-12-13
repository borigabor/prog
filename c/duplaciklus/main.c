#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int i,j,n = 0;
    bool egyes = false;
    bool nulla = false;
    for(i = 0; i < 5; i++)
    {

        for(j = 0; j < 5; j++)
{
    if(i == n && j == n)
    {
        printf("1");
    }
    else{printf("0");}

}
        printf("\n");
        n++;
    }
    return 0;
}
