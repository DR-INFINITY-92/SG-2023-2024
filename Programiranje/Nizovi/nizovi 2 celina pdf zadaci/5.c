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
void element_najblizi_proseku_niza(int n,int a[n])
{
    float prosek_niza,udaljenost_od_proseka;
    int i,index_elementa,suma_niza=0;
    for(i=0;i<n;i++)
        suma_niza=suma_niza+a[i];
    prosek_niza=1.0*suma_niza/n;
    udaljenost_od_proseka=fabs(a[0]-prosek_niza);
    index_elementa=0;
    for(i=1;i<n;i++)
        if(fabs(a[i]-prosek_niza)<udaljenost_od_proseka)
        {
            udaljenost_od_proseka=fabs(a[i]-prosek_niza);
            index_elementa=i;
        }
    printf("prosek niza je %.2f i element najblizi tom proseku je a[%d]=%d",prosek_niza,index_elementa,a[index_elementa]);
}


int main()
{
    int n;
    n=broj_elemenata_niza();
    int a[n];
    unos_elemenata_niza(n,a);
    ispis_elemenata_niza(n,a);
    element_najblizi_proseku_niza(n,a);
    return 0;
}
