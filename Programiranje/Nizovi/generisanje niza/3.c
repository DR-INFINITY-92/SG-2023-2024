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
void kreiraj_niz_a(int n,int a[n])
{
    int i,x;
    printf("unesi broj x\n");	
    scanf("%d",&x);
    a[0]=x;
    for(i=1;i<n;i++)
        a[i]=a[i-1]*2;
}
int main()
{
    int n;
    n=broj_elemenata_niza();
    int a[n];
    kreiraj_niz_a(n,a);
    ispis_elemenata_niza(n,a);
    return 0;
}
