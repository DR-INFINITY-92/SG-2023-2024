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
int max(int x, int y)
{
    if(x>y)
        return x;
    else
        return y;
}
void kreiraj_matricu(int v,int k,int a[v][k],int b[v][k],int c[v][k])
{
    int i,j;
    for(i=0;i<v;i++)
    {
        for(j=0;j<k;j++)
        {
            c[i][j]=max(a[i][j],b[i][j]);
        }
    }

}
int main() 
{
    int n,m;
    n=broj_vrsta();
    m=broj_kolona();
    int a[n][m],b[n][m],c[n][m];
    unos_elemenata_matrice(n,m,a);
    unos_elemenata_matrice(n,m,b);
    kreiraj_matricu(n,m,a,b,c);
    printf("elemetni matrice a\n");
    ispis_elemenata_matrice(n,m,a);
    printf("elemetni matrice b\n");
    ispis_elemenata_matrice(n,m,b);
    printf("elemetni matrice c\n");
    ispis_elemenata_matrice(n,m,c);
    return 0;
}
