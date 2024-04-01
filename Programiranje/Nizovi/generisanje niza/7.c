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
void kreiraj_niz_b(int n,int a[n],int b[n])
{
    int i,j,s=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            s=s+a[j];
        }
        b[i]=s;
        s=0;
    }
        
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
    int a[n],b[n];
    unos_elemenata_niza(n,a);
    kreiraj_niz_b(n,a,b);
    ispis_elemenata_niza(n,a);
    ispis_elemenata_niza(n,b);
    return 0;
}
