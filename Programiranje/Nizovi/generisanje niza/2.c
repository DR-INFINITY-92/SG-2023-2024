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
void kreiraj_niz_c(int n,int a[n],int b[n],int c[n])
{
    int i;
    for(i=0;i<n;i++)
        if(a[i]<b[i])
            c[i] = a[i];
        else
            c[i] = b[i];
}
int main()
{
    int n;
    n=broj_elemenata_niza();
    int a[n],b[n],c[n];
    unos_elemenata_niza(n,a);
    unos_elemenata_niza(n,b);
    kreiraj_niz_c(n,a,b,c);
    ispis_elemenata_niza(n,a);
    ispis_elemenata_niza(n,b);
    ispis_elemenata_niza(n,c);
    return 0;
}
