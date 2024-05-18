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
void unos_elemenata_matrice(int v,int w[v][v])
{
    int i,j;
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&w[i][j]);
        }
    }
}
void ispis_elemenata_matrice(int v,int w[v][v])
{
    int i,j;
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            printf("%d \t",w[i][j]);
        }
        printf("\n");
    }
}
void magicni_kvadrat(int m,int t[m][m])
{
    int i,j,s=0,k[m],v[m],gd=0,sd=0,indikator=1;
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
           s+=t[j][i];
        }
        k[i]=s;
        s=0;
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
           s+=t[i][j];
            if(i==j)
                gd+=t[i][j];
            if(i+j==m-1)
                sd+=t[i][j];
        }
        v[i]=s;
        s=0;
       
    }
    for(i=0;i<m;i++)
    {
         if(v[i]!=k[i])
         {
            indikator=0;
            break;
         }
    }
    if(gd==sd && indikator==1 && v[0]==gd && k[0]==gd)
        printf("matrica jeste magicni kvadrat\n");
    else
        printf("matrica nije magicni kvadrat\n");
}
int main() 
{
    int n;
    n=broj_vrsta();
    int a[n][n];
    unos_elemenata_matrice(n,a);
    ispis_elemenata_matrice(n,a);
    magicni_kvadrat(n,a);
    return 0;
}
