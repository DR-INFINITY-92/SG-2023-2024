#include<stdio.h>
#include<stdlib.h>
void unos_artikala(int n,int a[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf(" unesi cenu %d. artikla ",i+1);
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
int unesi_broj_artikala()
{
    int n;
    printf("unesi koliko artikala imamo\n");
    scanf("%d",&n);
    return n;
}
int minimum_niza(int n,int t[n])
{
    int i,min;
    min = t[0];
    for(i=1;i<n;i++)
        if(t[i] < min)
            min = t[i];
    return min;
}
float odstupanje_od_minimalnog(int n, int t[n])
{
    int i,s=0;
    float as,odstupanje;
    for(i=0;i<n;i++)
        s+=t[i]; 
    as=1.0*s/n;
    odstupanje=as-minimum_niza(n,t);
    return odstupanje;
    
}

int main()
{
    int n;
    n=unesi_broj_artikala();
    int a[n];
    float o;
    unos_artikala(n,a);
    o=odstupanje_od_minimalnog(n,a);
    printf("%.2f\n",o);
    return 0;
}