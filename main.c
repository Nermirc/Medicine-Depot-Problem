#include <stdio.h>
#include <stdlib.h>
#define N 5
    typedef struct
    {
            char ilac_adi[20];
            int adet;
            int fiyat;
    }data;
int main()
{
   data veriler[N];
   int i;
   for(i=0;i<N;i++)
   {
       fflush(stdin);
       printf("Lutfen ilac adini giriniz.\n");
       scanf("%s",&veriler[i].ilac_adi);

       printf("Lutfen ilac adedini giriniz.\n");
       scanf("%d",&veriler[i].adet);

       printf("Lutfen ilac fiyatini giriniz.\n");
       scanf("%d",&veriler[i].fiyat);
   }
    printf("ILAC ADI\n");
    printf("================");

    for(i=0;i<N;i++)
    {
        if(veriler[i].adet<20)
        {
            printf("%s\n",
                   veriler[i].ilac_adi);
        }
    }



                }
