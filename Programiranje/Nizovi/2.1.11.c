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
int broj_elemenata_vecih_od_poslednjeg(int n,int a[n])
{
    int i,br=0;
    for(i=0;i<n-1;i++)
        if(a[i]<a[n-1])
            br++;
    return br;
}

int main()
{
    int n;
    n=broj_elemenata_niza();
    int a[n];
    unos_elemenata_niza(n,a);
    ispis_elemenata_niza(n,a);
    printf("broj elemenata niza manjih od poslednjeg je %d\n",broj_elemenata_vecih_od_poslednjeg(n,a));
    return 0;
}
