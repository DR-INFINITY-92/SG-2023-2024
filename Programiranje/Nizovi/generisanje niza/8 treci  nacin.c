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
int  prebroji_negativne(int n,int a[n])
{
    int i,j,bn=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
           bn++;
    }   
    return bn;  
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
    int n,m;
    p:
    n=broj_elemenata_niza();
    if(n<1)
    {
        printf("los unos broja n unesi opet");
        goto p;
    }
    int a[n];
    unos_elemenata_niza(n,a);
    ispis_elemenata_niza(n,a);
    m=prebroji_negativne(n,a);
    m=n-m;
    ispis_elemenata_niza(n,a);
    sortiraj_opadajuce(n,a);
    ispis_elemenata_niza(n,a);
    ispis_elemenata_niza(m,a);
    return 0;
}
