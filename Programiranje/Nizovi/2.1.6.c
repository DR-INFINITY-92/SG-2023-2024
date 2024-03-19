#include<stdio.h>
#include<stdlib.h>
void unos_vremena_putovanja_autobusa(int n,int a[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf(" unesi vreme putovanja za %d. autobus ",i+1);
        scanf("%d",&a[i]);
    }
}

void ispis_vremena_putovanja_autobusa(int n,int a[n])
{
    int i;
    for(i=0;i<n;i++)
    {
         printf(" %d ",a[i]);
    }
}
int broj_autobusa()
{
    int n;
    printf("unesi koliko imamo autobusa\n");
    scanf("%d",&n);
    return n;
}
void kasnjenje_autobusa(int n,int a[n],int m,int k,int t)
{
    int i;
    for(i=m-1;i<=k-1;i++)
        a[i]=a[i]+t;
}
int main()
{
    int n,m,k,t;
    n=broj_autobusa();
    int a[n]; /*u ovom nizu cuvam vremena putovanja za autobuse*/
    unos_vremena_putovanja_autobusa(n,a);
    printf("unesi od koje do koje linije je kasnjenje i unesi kasnjenje u minutima\n");
    scanf("%d%d%d",&m,&k,&t);
    printf("vremena pre kasnjenja\n");
    ispis_vremena_putovanja_autobusa(n,a);
    kasnjenje_autobusa(n,a,m,k,t);
    printf("\n vremena nakon kasnjenje\n");
    ispis_vremena_putovanja_autobusa(n,a);
    return 0;
}
