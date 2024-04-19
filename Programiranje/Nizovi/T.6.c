#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void unos_elemenata_niza(int n,int t[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf(" unesi  %d. element niza  ",i+1);
        scanf("%d",&t[i]);
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
    printf("unesi koliko niz ima elemenata\n");
    scanf("%d",&n);
    return n;
}
void pomeranje(int n, int a[n])
{
    int i,x,k;
    printf("unesi za koliko mesta zelis da ispomeras niz");
    scanf("%d",&x);
    k=n-x;
    for(i=0;i<k;i++)
    {
        a[i+x]=a[i];
        a[i]=0;
    }  
    a[i]=0;
}

int main()
{
    int n;
    p:
    n=broj_elemenata_niza();
    if(n<1)
    {
        printf("greska prilikom unosa unesi opet\n");
        goto p;
    }
    int a[n];
    unos_elemenata_niza(n,a);
    pomeranje(n,a);
    ispis_elemenata_niza(n,a);
    return 0;
}