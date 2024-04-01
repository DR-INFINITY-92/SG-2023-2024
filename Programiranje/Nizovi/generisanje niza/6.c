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
    printf("unesi koliko elemenata niza imamo unesi paran broj\n");
    scanf("%d",&n);
    return n;
}
void kreiraj_niz_b(int n,int m, int a[n],int b[m])
{
    int i;
    for(i=0;i<m;i++)
        b[i]=a[i]+a[i+1];
}
int main()
{
    int n;
    p:
    n=broj_elemenata_niza();
    if(n<1)
    {
        printf("los unos broja n unesi opet");
        goto p;
    }
    int m;
    m=n-1;
    int a[n],b[m];
    unos_elemenata_niza(n,a);
    kreiraj_niz_b(n,m,a,b);
    ispis_elemenata_niza(n,a);
    ispis_elemenata_niza(m,b);
    return 0;
}
