#include<stdio.h>
#include<stdlib.h>
void unos_velicina_zaba(int n,float t[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf(" unesi velicinu %d. zabe ",i+1);
        scanf("%f",&t[i]);
    }
}

void ispis_elemenata_niza(int n,int a[n])
{
    int i;
    for(i=0;i<n;i++)
    {
         printf(" %f ",a[i]);
    }
}
int unesi_broj_zaba()
{
    int n;
    printf("unesi koliko zaba imamo\n");
    scanf("%d",&n);
    return n;
}
void klasifikacija_zaba(int n, float t[n])
{
    float a,b,korak;
    int k,j,i,br=0;
    printf("unesi donju granicu intervala");
    scanf("%f",&a);
    printf("unesi gornju granicu intervala");
    scanf("%f",&b);
    printf("unesi na koliko delova zelite da podelite ovaj interval");
    scanf("%d",&k);
    korak=(b-a)/k;
    unos_velicina_zaba(n,t);
    for(j=0;j<k;j++)
    {
        for(i=0;i<n;i++)
        {
            if((t[i]>=a+j*korak && t[i]<a+(j+1)*korak))
                br++;
        }
        printf("[%.3f-%.3f]:%d",a+j*korak,a+(j+1)*korak,br);
        while(br>0)
        {
            printf("**");
            br--;
        }
        printf("\n");
    }
}
int main()
{
    int n;
    n=unesi_broj_zaba();
    float a[n];
    klasifikacija_zaba(n,a);
    return 0;
}