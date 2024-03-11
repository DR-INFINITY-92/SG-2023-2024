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
int broj_cifara(int k)
{
    int br=0;
    while(k!=0)
    {
        k=k/10;
        br++;
    }
    return br;
}
void napravi_nizove(int n, int k, int a[n],int b[n])
{
    while(k!=0)
    {
        a[n-1]=k%10;
        b[n-1]=k%10;
        n--;
        k=k/10;
    }
}
void pojavljivanje_cifre(int n,int k,int a[n],int b[n])
{
    int i,j,br=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
          if(a[i]==b[j])
            br++;
        printf("\nu broju %d cifra %d se pojavljuje %d puta\n",k,a[i],br);
        br=0;
    }
}
int main()
{
    int k,n;
    printf("unesi celi broj");
    scanf("%d",&k);
    n= broj_cifara(k);
    int a[n],b[n];
    napravi_nizove(n,k,a,b);
    pojavljivanje_cifre(n,k,a,b);
    return 0;
}
