#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,brojac_artikala=0; /*n-broj artikala u prodavnici*/
    float nikola_novac,cena_artikla;
    printf("unesi koliko artikala ima u prodavnici\n");
    scanf("%d",&n);
    printf("unesi koliko novca ima Nikola \n");
    scanf("%f",&nikola_novac);
    for(i=1;i<=n;i++)
    {
        printf("unesi cenu %d. artikla\n",i);
        scanf("%f",&cena_artikla);
        if(cena_artikla<=nikola_novac)
            brojac_artikala++;
    }
    printf("od %d artikala u prodavnici Nikola moze da kupi %d",n,brojac_artikala);
    return 0;
}