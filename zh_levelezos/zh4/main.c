#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE * fp;
   fp = fopen("szoveg.txt","w");
   char ip_cim[40];
   int i = 0;
   while(ip_cim[0] != '*' && i < 20)
   {
       printf("ip cim:");
       fgets(ip_cim,40,stdin);
       i++;
       if(ip_cim[0] != '*')
       {
           fprintf(fp,"%s",ip_cim);
       }

   }
   fclose(fp);
    return 0;
}
