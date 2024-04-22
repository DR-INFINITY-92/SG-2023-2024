#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void sortiraj_rastuce(int n, int a[n])
{
    int i, x, j, t;
      for (i = 0; i < n-1; i++)
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
}
int izbaci_duplikate(int n, int a[n])
{
    int i,j;
    for (i=0; i <n-1; i++) 
    {
        if(a[i]==a[i+1])
        {
            for(j=i;j<n;j++)
            {
                a[j]=a[j+1];
            }
             n--;
            i--;
            
        }
    }
    return n;
}
void ispis_elemenata_niza(int n,int a[n])
{
    int i;
    for(i=0;i<n;i++)
    {
         printf(" %d ",a[i]);
    }
}
void par_nepar(int m, int a[m])
{
    int i,brp=0,brn=0,j=0,k=0,p2,n2;
    for(i=0; i<m; i++)
    {
        if (a[i] % 2==0)
            brp++;
        else
            brn++;
    }
    int p[brp],n[brn];
    for(i=0; i<m; i++)
    {
        if(a[i] % 2==0)
        {
             p[k]=a[i];
            k++;
        }
        else
        {
            n[j]=a[i];
            j++;
        }
    }
    sortiraj_rastuce(brp,p);
    sortiraj_rastuce(brn,n);
    p2=izbaci_duplikate(brp,p);
    n2=izbaci_duplikate(brn,n);
    printf("Niz parnih je\n");
    ispis_elemenata_niza(p2,p);
    printf("Niz neparnih je\n");
    ispis_elemenata_niza(n2,n);

}
void unos_adresa(int n,int t[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf(" unesi  %d. adresu kuce  ",i+1);
        scanf("%d",&t[i]);
    }
}

int broj_paketa()
{
    int n;
    printf("unesi koliko imas paketa\n");
    scanf("%d",&n);
    return n;
}

int main()
{
    int n;
    p:
    n=broj_paketa();
    if(n<1)
    {
        printf("greska prilikom unosa unesi opet\n");
        goto p;
    }
    int a[n];
    unos_adresa(n,a);
    par_nepar(n,a);

    return 0;
}