#include <stdio.h>
#include <stdlib.h>
/*K�sz�ts strukt�r�t ami g�pj�rm�veknek a nev�t �s a v�gsebbes�g�t t�rolja! K�sz�ts egy 5 elem� t�mb�t bel�le!

  K�sz�ts f�ggv�nyt ami novekv� sorrendbe �ll�tja a g�pj�rm�vek t�mbj�t �s a h�rom legygyorsab aut�nak az adatiat
  bele�rja egy bin�ris f�jlba! olvasd is ki az adatokat!

  K�sz�ts f�ggv�nyt ami a g�pj�rm�vek t�mb�l kiv�lasztkja �s ki�rja azoknak az aut�knak a nev�t amelyek 280 km/h- n�l nagyobb
  v�gsebess�gel rendelkeznek!

  �ll�ts be egy pointert amely ki�rja a leggyorsabb aut� v�gsebes�g�t!*/

  struct Auto{

    char nev[40];
    int veg_seb;

  };
  void nov_rendez(struct Auto tomb[])
  {
      int i,j;
      FILE * fPointer;
      fPointer = fopen("autok.dat", "wb");
      int tmp;
      char seged[40];
      int n = 5;
      int utolso;
      for(i = n - 1; i > 0; i = utolso)
      {

      utolso = 0;
        for(j = 0; j < i; j++)
            if(tomb[j].veg_seb < tomb[j+1].veg_seb)
            {
                tmp = tomb[j].veg_seb;
                strcpy(seged,tomb[j].nev);
                tomb[j].veg_seb = tomb[j+1].veg_seb;
                strcpy(tomb[j].nev,tomb[j+1].nev);
                tomb[j+1].veg_seb = tmp;
                strcpy(tomb[j+1].nev,seged);
                utolso = j;
            }
      }
            for(i = 0; i < 3; i++)
            {
                fprintf(fPointer,"%s",tomb[i].nev);
                fprintf(fPointer,"%i\n",tomb[i].veg_seb);

            }
            fclose(fPointer);
  }
  void nagyobb(struct Auto tomb[])
  {
      int i;
      int m;
      int j = 0;
      int n = 5;
      struct Auto b[5];
      for(i = 0; i < n; i++)
      {
          if(tomb[i].veg_seb > 280)
          {

              strcpy(b[j].nev,tomb[i].nev);
              j++;
          }
           m = j;
      }
      for(i = 0; i < m; i++)
      {
          printf("%s\n",b[i].nev);
      }
  }
int main()
{
    struct Auto adat[5];
    FILE * fPointer;
    int max;
    int *iP;
    fPointer = fopen("autok.dat", "rb");
    char sor[100];
    int i;
    for(i = 0; i < 5; i++)
    {
        printf("Add meg a(z) %i. auto nevet:",i+1);
        fgets(adat[i].nev,40,stdin);

        printf("Add meg a(z) %i. auto vegsebesseget(km/h):",i+1);
        scanf("%i",&adat[i].veg_seb);
        fflush(stdin);
    }
    nov_rendez(adat);
    printf("\nA h�rom legygyorsab aut�nak az adatia:\n");
    while(!feof(fPointer))
    {
        fgets(sor,100,fPointer);
        puts(sor);
    }
    fclose(fPointer);
    printf("\n amelyek 280 km/h- n�l nagyobb vegsebessegel rendelkeznek!\n");
    nagyobb(adat);
    max = adat[0].veg_seb;
    for(i = 0; i < 5; i++)
    {
        if(adat[i].veg_seb > max)
        {
            max = adat[i].veg_seb;
        }
    }
    iP = &max;
    printf("A leggyorsabb auto sebessege:%i",*iP);
    return 0;
}
