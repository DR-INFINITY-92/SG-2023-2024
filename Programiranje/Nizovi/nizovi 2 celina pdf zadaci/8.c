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
    printf("\n");
}
int broj_elemenata_niza()
{
    int n;
    printf("unesi koliko elemenata niza imamo\n");
    scanf("%d",&n);
    return n;
}
void index_pojavljivanja_broja(int n,int a[n])
{
    int m,x,br=0,index,i;
    printf("unesi broj x\n");
    scanf("%d",&x);
    printf("unesi broj pojavljivanja\n");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
            br++;
        if(br==m)
        {
            index=i;
            break;
        }
            
    }
    printf("index je %d",index);

}
int main()
{
    int n;
    n=broj_elemenata_niza();
    int a[n];
    unos_elemenata_niza(n,a);
    ispis_elemenata_niza(n,a);
    index_pojavljivanja_broja(n,a);
    return 0;
}
