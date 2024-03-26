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
int max_par_nepar(int n, int a[n])
{
    int i,maxp,maxnp;
    maxp=a[0];
    maxnp=a[1];
    for(i=2;i<n;i++) 
    {
        if(a[i]>maxp)
            maxp=a[i];
        if(a[i+1]>maxnp)
            maxnp=a[i+1];
        i++;  
    }
    printf("testiranjeeeeeee");
    printf("maxp=%d maxnp=%d",maxp,maxnp);
    if(maxp>maxnp)
        return 2;
    else
        return 1;
}

int main()
{
    int n,m;
    n=broj_elemenata_niza();
    int a[n];
    unos_elemenata_niza(n,a);
    ispis_elemenata_niza(n,a);
    m=max_par_nepar(n,a);
    if(m==2)
        printf("veci je maximum parnih elemenata niza\n");
    else
        printf("veci je maximum neparnih elemenata niza\n");
    return 0;
}
