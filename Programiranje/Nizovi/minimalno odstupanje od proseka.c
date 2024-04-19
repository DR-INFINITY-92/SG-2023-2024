#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void unos_elemenata_niza(int n,float t[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf(" unesi  %d. element niza  ",i+1);
        scanf("%f",&t[i]);
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
    printf("unesi koliko niz ima elemenata\n");
    scanf("%d",&n);
    return n;
}
float minimalno_odstupanje_od_proseka(int n,float t[n])
{
    int i;
    float min;
    min = t[0];
    for(i=1;i<n;i++)
        if(t[i] < min)
            min = t[i];
    return min;
}
float aritmeticka_sredina(int n, float t[n])
{
    int i;
    float as,s=0;
    for(i=0;i<n;i++)
        s+=t[i]; 
    as=s/n;
    return as;
    
}
void kreiraj_niz_b(int n, float a[n],float b[n])
{
    int i;
    float as;
    as=aritmeticka_sredina(n,a);
    for(i=0;i<n;i++)
        b[i] = fabs(a[i]-as);
}

int main()
{
    int n;
    p:
    n=broj_elemenata_niza();
    if(n>100 || n<1)
    {
        printf("greska prilikom unosa unesi opet\n");
        goto p;
    }
    float a[n],b[n],m;
    unos_elemenata_niza(n,a);
    kreiraj_niz_b(n,a,b);
    m=minimalno_odstupanje_od_proseka(n,b);
    printf("%.2f\n",m);
    return 0;
}