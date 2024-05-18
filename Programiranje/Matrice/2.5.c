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
void odnos_suma_elemenata_iznad_i_ispod_sd(int m,int t[m][m])
{
    int i,j,s1=0,s2=0; /*s1-suma elemenata iznad sd s2-suma elementa ispod sd*/
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
        {
            if(i+j<m-1)
                s1+=t[i][j];
            if(i+j>m-1)
                s2+=t[i][j];
        }
        if(s1==s2)
            printf("sume elemanta iznad i ispod sd su jednake\n");
        else
        {
            if(s1>s2)
                 printf("sume elemanta iznad sporedne dijagonale je veca od sume ispod\n");
            else
                printf("sume elemanta ispod sporedne dijagonale je veca od sume iznad\n");
        }
}
int main() 
{
    int n;
    n=broj_vrsta();
    int a[n][n];
    unos_elemenata_matrice(n,a);
    ispis_elemenata_matrice(n,a);
    odnos_suma_elemenata_iznad_i_ispod_sd(n,a);
    return 0;
}
