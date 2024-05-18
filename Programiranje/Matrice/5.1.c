/*max gd i min sd razmena elemenata.c*/

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
void razmena_elemnata_na_sd_i_gd(int m,int t[m][m])
{
    int i,j,maxigd,maxjgd,minisd,minjsd,maxgd,minsd,k;
    maxigd=0;
    maxjgd=0;
    maxgd=t[0][0];
    minisd=0;
    minjsd=m-1;
    minsd=t[0][m-1];
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j)
                if(t[i][j]>maxgd)
                {
                    maxgd=t[i][j];
                    maxigd=i;
                    maxjgd=j;
                }
            if(i+j==m-1)
                if(t[i][j]<minsd)
                {
                    minsd=t[i][j];
                    minisd=i;
                    minjsd=j;
                }
        }
    }
    k=t[maxigd][maxjgd];
    t[maxigd][maxjgd]=t[minisd][minjsd];
    t[minisd][minjsd]=k;
    
}

int main() 
{
    int n;
    n=broj_vrsta();
    int a[n][n];
    unos_elemenata_matrice(n,a);
    ispis_elemenata_matrice(n,a);
    razmena_elemnata_na_sd_i_gd(n,a);
    printf("matrica posle razmene elemenata na dijagonalama izgleda\n");
    ispis_elemenata_matrice(n,a);
    return 0;
}
