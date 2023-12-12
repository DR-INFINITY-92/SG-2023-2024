#include<stdio.h>
#include<stdlib.h>
int main()
{
 int i,n,bpz=0;
 float cena_artikla,minimalna_cena,trenutni_artikal,prethodni_artikal;
 printf("unesi koliko imas aritkala\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
    printf("unesi cenu %d. artikla \n",i);
    scanf("%f",&cena_artikla);
    if(i==1)
    {
        minimalna_cena=cena_artikla;
        prethodni_artikal=cena_artikla;
        continue;
    }
    trenutni_artikal=cena_artikla;
    if(trenutni_artikal<prethodni_artikal)
    {
         minimalna_cena=trenutni_artikal;
         prethodni_artikal=trenutni_artikal;
    }
 }
 printf("minimalna cena artikla je  %f",minimalna_cena);
return 0;
}    