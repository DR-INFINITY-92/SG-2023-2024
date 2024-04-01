#include<stdio.h>
#include<stdlib.h>
void unos_elemenata_niza(int n,int t[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf(" unesi %d. element niza ",i+1);
        scanf("%d",&t[i]);
    }
}

void ispis_elemenata_niza(int n,int t[n])
{
    int i;
    for(i=0;i<n;i++)
    {
         printf(" %d ",t[i]);
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
void kreiraj_niz_b(int n,int a[n],int b[n])
{
    int i;
    for(i=0;i<n;i++)
        b[n-1-i]=a[i];
}
int main()
{
    int n;
    n=broj_elemenata_niza();
    int a[n],b[n];
    unos_elemenata_niza(n,a);
    kreiraj_niz_b(n,a,b);
    ispis_elemenata_niza(n,a);
    ispis_elemenata_niza(n,b);
    return 0;
}
