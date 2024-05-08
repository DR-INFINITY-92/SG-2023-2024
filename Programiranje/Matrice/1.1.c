#include<stdio.h>
#include<stdlib.h>
int broj_vrsta()
{
    int x;
    printf("Unesite koliko redova imamo tj. vrsta ima matrica\n");
    scanf("%d",&x);
    return x;
}
int broj_kolona()
{
    int x;
    printf("Unesite koliko kolona ima matrica\n");
    scanf("%d",&x);
    return x;
}
void unos_elemenata_matrice(int v,int k,int w[v][k])
{
    int i,j;
    for(i=0;i<v;i++)
    {
        for(j=0;j<k;j++)
        {
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&w[i][j]);
        }
    }
}
void ispis_elemenata_matrice(int v,int k,int w[v][k])
{
    int i,j;
    for(i=0;i<v;i++)
    {
        for(j=0;j<k;j++)
        {
            printf("%d \t",w[i][j]);
        }
        printf("\n");
    }
}
void kreiraj_niz(int v,int k, int w[v][k],float t[k])
{
    int i,j,s=0;
    float as;
    for(j=0;j<k;j++)
    {
        for(i=0;i<v;i++)
        {
            s=s+w[i][j];
        }
        as=1.0*s/v;
        t[j]=as;
        s=0;
    }
}
void ispis_elemenata_niza(int k, float t[k])
{
    int i;
    printf("elementi niza su\n");
    for(i=0;i<k;i++)
        printf("%.2f \t",t[i]);
}
int main() 
{
    int n,m;
    n=broj_vrsta();
    m=broj_kolona();
    int a[n][m];
    float b[m];
    unos_elemenata_matrice(n,m,a);
    ispis_elemenata_matrice(n,m,a);
    kreiraj_niz(n,m,a,b);
    ispis_elemenata_niza(m,b);
    return 0;
}
