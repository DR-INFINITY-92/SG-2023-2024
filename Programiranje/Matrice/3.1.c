
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
void maksimumi_parnih_vrsta_minimumi_neparnih_vrsta(int m,int t[m][m])
{
    int i,j,max,min,kp[m/2],kn[m/2],br=0;
    max=t[0][0];
    min=t[0][1];
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
           if(t[j][i]>max)
           { 
                max=t[j][i];
           }
        }
        kp[br]=max;
        br++;
        max=t[0][2*br];
        i++;
    }
    br=0;
    

    for(i=1;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
           if(min>t[j][i])
           { 
                min=t[j][i];
           }
           
        }
        kn[br]=min;
        br++;
        min=t[0][2*br+1];
        i++;
    }
    printf("maksimumi parnih kolona\n");
    for(i=0;i<m/2;i++)
        printf(" %d ",kp[i]);
    printf("minimumu neparnih kolona\n");
    for(i=0;i<m/2;i++)
        printf(" %d ",kn[i]);
    
}
int main() 
{
    int n;
    n=broj_vrsta();
    int a[n][n];
    unos_elemenata_matrice(n,a);
    ispis_elemenata_matrice(n,a);
    maksimumi_parnih_vrsta_minimumi_neparnih_vrsta(n,a);
    return 0;
}
