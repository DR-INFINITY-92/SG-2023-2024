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
void ubaci_x_u_niz(int m, int t[m])
{
    int x,i,j;
    printf("\nunesi celi broj x\n");
    scanf("%d",&x);
    for(i=0; i<m;i++)
    {
        if(t[i]>x)
        {
              for(j=m-1;j>i;j--)
                t[j]=t[j-1];
            t[i+1]=x;
            break;
        }
        else
        {
            t[m-1]=x;
        }
    }
}
int main()
{
    int n,m;
    n=broj_elemenata_niza();
    m=n+1;
    int a[m];
    unos_elemenata_niza(n,a);
    ispis_elemenata_niza(n,a);
    ubaci_x_u_niz(m,a);
    ispis_elemenata_niza(m,a);
    return 0;
}