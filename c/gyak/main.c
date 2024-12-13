#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> /*Logikai változók használatához kell (nélküle is lehet!)*/

int main()
{
        char betuk[]={'a','b','c','d','e', /* Az angol abc karaktereit tartalmazó tömb.*/
                  'f','g','h','i','j',
                  'k','l','m','n','o',
                  'p','q','r','s','t',
                  'u','v','w','x','y','z'};
char kar;
 int db = 0;
 int i;
 bool a = false; /*logikai változó alapesetben hamisra állítom*/
 while(kar !='*' && db < 10) /*feltétel * végjelig illetve nem lehet nagyobb mint 10*/
 {
     db++; /*számol 10-ig*/
     printf("%i. karakter:",db);
     scanf("%c",&kar);
     fflush(stdin); /*Karakterek esetében kell mert amúgy c-ben megzavarodik*/

     a = false; /* hamisra állítom minden kezdet elején (lényegében kapcsolóként szolgál!)*/
for(i = 0; i < 26; i++)
{

    if(kar == betuk[i])
    {
        a = true; /*ha  afeltétel teljesük igazra állítom*/
    }

}
if(a == true) /*A cikluson kívûl! csinálok egy feltételt ami ha igaz *-ot ír */
{
    printf("*\n");
}
else{printf("%c\n",kar);} /*Hamis esetén (ami az alaphelyzet) pedig magát a karaktert*/

}
    return 0;
}
