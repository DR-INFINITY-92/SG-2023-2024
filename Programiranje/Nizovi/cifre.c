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
}
int broj_elemenata_niza()
{
    int n;
    printf("unesi koliko elemenata niza imamo\n");
    scanf("%d",&n);
    return n;
}
int broj_cifara(int k)
{
    int b=0;
    while(k!=0)
    {
        b++;
        k/=10;
    }
    return b;
}
void kreiraj_niz_b(int n,int b[n],int a[n])
{
    int i;
    for(i=0;i<n;i++)
        b[i]=broj_cifara(a[i]);
}
int main()
{
    int n;
    n=broj_elemenata_niza();
    int a[n],b[n];
    unos_elemenata_niza(n,a);
    kreiraj_niz_b(n,b,a);
    printf("elementi niza a\n");
    ispis_elemenata_niza(n,a);
    printf("\nelementi niza b\n");
    ispis_elemenata_niza(n,b);
    return 0;
}