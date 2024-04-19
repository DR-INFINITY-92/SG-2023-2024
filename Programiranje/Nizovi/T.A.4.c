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
void ubaci_niz_b_u_niz_a(int k, int m,int t[k],int w[m])
{
    int p,i,j,br=0;
    printf("\nunesi index  elementa iza kog  zelis da ubacis niz b x\n");
    scanf("%d",&p);
    for(i=k-1; i>p;i--)
        t[i]=t[i-1];
    for(j=p;j<p+m;j++)
    {
         t[j]=w[br];
            br++;
    }
}
int main()
{
    int n,m,k;
    n=broj_elemenata_niza();
    m=broj_elemenata_niza();
    k=m+n;
    int a[k],b[m];
    unos_elemenata_niza(n,a);
    unos_elemenata_niza(m,b);
    ubaci_niz_b_u_niz_a(k,m,a,b);
    printf("\nniz b\n");
    ispis_elemenata_niza(m,b);
    printf("\nniza a nakon umetanja b\n");
    ispis_elemenata_niza(k,a);
    return 0;
}