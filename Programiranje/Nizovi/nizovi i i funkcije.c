#include<stdio.h>
#include<stdlib.h>
void unos_niza(int n,int a[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf(" a[%d] = ",i);
        scanf("%d",&a[i]);
    }
}

void ispis_niza(int n,int a[n])
{
    int i;
    for(i=0;i<n;i++)
    {
         printf(" a[%d]=%d ",i,a[i]);
    }
}
int broj_elemenata_niza()
{
    int n;
    printf("unesi koliko niz ima elemenata\n");
    scanf("%d",&n);
    return n;
}
int main()
{
    int n;
    n=broj_elemenata_niza();
    int a[n];
    unos_niza(n,a);
    ispis_niza(n,a);
    return 0;
}
