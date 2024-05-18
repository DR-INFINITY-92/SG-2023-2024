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
void kreiraj_nizove(int k, int w[k][k],int x[k],int t[k])
{
    int i,j,s=0;
    // ovde trazimo sada sumu elementa po kolonama i pakujemo u niz x
    for(j=0;j<k;j++)
    {
        for(i=0;i<k;i++)
        {
            s+=w[i][j];
        }
        x[j]=s;
        s=0;
    }
    
        // ovde trazimo sada sumu elementa po vrstama i pakujemo u niz t
    for(i=0;i<k;i++)
    {
        for(j=0;j<k;j++)
        {
            s+=w[i][j];
        }
        t[i]=s;
        s=0;
    }
}

void ispis_elemenata_niza(int k, int t[k])
{
    int i;
    printf("elementi niza su\n");
    for(i=0;i<k;i++)
        printf("%d \t",t[i]);
    printf("\n");
}
void  indeks_najveceg_elementa_na_gd(int k,int w[k][k])
{
    int max,maxindeks,i,j;
    max = w[0][0];
    maxindeks=0;
    for(i=0;i<k;i++)
    {
        for(j=0;j<k;j++)
        {
            if(i==j)
            {
                if(w[i][j]>max)
                {
                    max=w[i][j];
                    maxindeks=i;
                }
            }
        }
    }
    printf("najveci element na glavnoj dijagonali je %d i njegov indeks je %d %d",w[maxindeks][maxindeks],maxindeks,maxindeks);
}
int main() 
{
    int n;
    n=broj_vrsta();
    int a[n][n];
    unos_elemenata_matrice(n,a);
    ispis_elemenata_matrice(n,a);
    indeks_najveceg_elementa_na_gd(n,a);
    return 0;
}
