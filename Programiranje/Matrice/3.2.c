
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
void razlika_maks_i_min_reda(int m,int t[m][m])
{
    int i,j,max,min,x[m/2],br=0;
    max=t[0][0];
    min=t[0][0];
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
           if(t[i][j]>max)
           { 
                max=t[i][j];
           }
           if(t[i][j]<min)
           { 
                min=t[i][j];
           }
        }
        x[br]=max-min;
        br++;
        max=t[2*br][0];
        min=t[2*br][0];
        i++;
    }
    printf("razlika maximuma i minimuma parnih redova\n");
    for(i=0;i<m/2;i++)
        printf(" %d ",x[i]);
    
}
int main() 
{
    int n;
    n=broj_vrsta();
    int a[n][n];
    unos_elemenata_matrice(n,a);
    ispis_elemenata_matrice(n,a);
    razlika_maks_i_min_reda(n,a);
    return 0;
}
