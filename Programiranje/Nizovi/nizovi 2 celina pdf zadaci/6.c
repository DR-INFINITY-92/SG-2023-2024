#include<stdio.h>
#include<stdlib.h>
void unos_elemenata_niza(int n,int a[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf(" unesi %d. element niza ",i+1);
        scanf("%d",&a[i]);
    }
}

void ispis_elemenata_niza(int n,int a[n])
{
    int i;
    for(i=0;i<n;i++)
    {
         printf(" %d ",a[i]);
    }
    printf("\n");
}
int broj_elemenata_niza()
{
    int n;
    printf("unesi koliko elemenata niza imamo\n");
    scanf("%d",&n);
    return n;
}
void sortiraj_opadajuce(int n,int a[n])
{ 
    int i,j,t;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
}
void  index_prvog_i_poslednjeg_pozitivnog(int n,int a[n])
{
    int  i,indexf,indexl;
    indexf=0;
    for(i=1;i<n;i++)
    {
        if(a[i]<0)
        {
            indexl=i-1;
            break;
        }
            
    }
    printf("prvi pozitivan element niza ima index %d i to je %d \n",indexf,a[indexf]);
     printf("poslednji pozitivan element niza ima index %d i to je %d \n",indexl,a[indexl]);
}
int main()
{
    int n;
    n=broj_elemenata_niza();
    int a[n];
    unos_elemenata_niza(n,a);
    ispis_elemenata_niza(n,a);
    sortiraj_opadajuce(n,a);
    ispis_elemenata_niza(n,a);
    index_prvog_i_poslednjeg_pozitivnog(n,a);
    return 0;
}
