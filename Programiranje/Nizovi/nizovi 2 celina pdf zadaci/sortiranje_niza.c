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
void sortiraj_rastuce(int n,int a[n])
{ 
    int i,j,t;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
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
int main()
{
    int n;
    n=broj_elemenata_niza();
    int a[n];
    unos_elemenata_niza(n,a);
    ispis_elemenata_niza(n,a);
    sortiraj_rastuce(n,a);
    ispis_elemenata_niza(n,a);
    sortiraj_opadajuce(n,a);
    ispis_elemenata_niza(n,a);
    return 0;
}
