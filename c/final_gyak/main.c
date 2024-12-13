#include <stdio.h>
#include <stdlib.h>
/*Készíts struktúrát ami gépjármüveknek a nevét és a végsebbeségét tárolja! Készíts egy 5 elemû tömböt belõle!

  Készíts függvényt ami novekvõ sorrendbe állítja a gépjármüvek tömbjét és a három legygyorsab autónak az adatiat
  beleírja egy bináris fájlba! olvasd is ki az adatokat!

  Készíts függvényt ami a gépjármüvek tömböl kiválasztkja és kiírja azoknak az autóknak a nevét amelyek 280 km/h- nál nagyobb
  végsebességel rendelkeznek!

  Állíts be egy pointert amely kiírja a leggyorsabb autó végsebeségét!*/

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
    printf("\nA három legygyorsab autónak az adatia:\n");
    while(!feof(fPointer))
    {
        fgets(sor,100,fPointer);
        puts(sor);
    }
    fclose(fPointer);
    printf("\n amelyek 280 km/h- nál nagyobb vegsebessegel rendelkeznek!\n");
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
