#include <stdio.h>
#include <stdlib.h>

/*Kérj be '*' végjeléig karaktereket, a végjelen kívül legfeljebb 10-et! Írasd ki őket úgy, hogy a kisbetűs angol magánhangzók helyett
csillagok szerepeljenek */
int main()
{

char kar;
 int db = 0;
 int i;

 while(kar !='*' && db < 10) /*feltétel * végjelig illetve nem lehet nagyobb mint 10*/
 {
     db++; /*számol 10-ig*/
     printf("%i. karakter:",db);
     scanf("%c",&kar);
     fflush(stdin); /*Karakterek esetében kell mert amúgy c-ben megzavarodik*/



    if(kar =='a' || kar == 'e' || kar == 'i' || kar == 'o' || kar == 'u') /*feltétel ha teljesül csillagot ír*/
    {
  printf("*\n");
    }



else{printf("%c\n",kar);} /*Kiírja  magát a karaktert*/

}
    return 0;
}

