#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> /*Logikai v�ltoz�k haszn�lat�hoz kell (n�lk�le is lehet!)*/

int main()
{
        char betuk[]={'a','b','c','d','e', /* Az angol abc karaktereit tartalmaz� t�mb.*/
                  'f','g','h','i','j',
                  'k','l','m','n','o',
                  'p','q','r','s','t',
                  'u','v','w','x','y','z'};
char kar;
 int db = 0;
 int i;
 bool a = false; /*logikai v�ltoz� alapesetben hamisra �ll�tom*/
 while(kar !='*' && db < 10) /*felt�tel * v�gjelig illetve nem lehet nagyobb mint 10*/
 {
     db++; /*sz�mol 10-ig*/
     printf("%i. karakter:",db);
     scanf("%c",&kar);
     fflush(stdin); /*Karakterek eset�ben kell mert am�gy c-ben megzavarodik*/

     a = false; /* hamisra �ll�tom minden kezdet elej�n (l�nyeg�ben kapcsol�k�nt szolg�l!)*/
for(i = 0; i < 26; i++)
{

    if(kar == betuk[i])
    {
        a = true; /*ha  afelt�tel teljes�k igazra �ll�tom*/
    }

}
if(a == true) /*A cikluson k�v�l! csin�lok egy felt�telt ami ha igaz *-ot �r */
{
    printf("*\n");
}
else{printf("%c\n",kar);} /*Hamis eset�n (ami az alaphelyzet) pedig mag�t a karaktert*/

}
    return 0;
}
