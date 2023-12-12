#include<stdio.h>
#include<stdlib.h>
int main()
{
 int i,n;
 float cena_artikla,minimalna_cena_artikla,minimalna_cena,trenutna_cena_artikla,prethodna_cena_artikla;
 printf("unesi koliko imas aritkala\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
    printf("unesi cenu %d. artikla \n",i);
    scanf("%f",&cena_artikla);
    if(i==1)
    {
        minimalna_cena_artikla=cena_artikla;
        prethodna_cena_artikla=cena_artikla;
        continue;
    }
    trenutna_cena_artikla=cena_artikla;
    if(trenutna_cena_artikla<prethodna_cena_artikla)
    {
         minimalna_cena=trenutna_cena_artikla;
         prethodna_cena_artikla=trenutna_cena_artikla;
    }
 }
 printf("minimalna cena artikla je  %f",minimalna_cena);
return 0;
}    