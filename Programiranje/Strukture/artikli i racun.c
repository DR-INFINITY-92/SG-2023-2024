#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char naziv[30];
    int kolicina;
    float cena;
}Artikal;

typedef struct
{
    int broj_artikala;
    Artikal a[30];
}Korpa;
int broj_potrosackih_korpi()
{
    int n;
    printf("unesi koliko potrosackih korpi ima\n");
    scanf("%d",&n);
    return n;
}
void unesi_korpe(int n, Korpa k[n])
{
    int i,j;
    FILE *f;
    f=fopen("artikli.txt","r");
    for(i=0;i<n;i++)
    {
        //printf("unesi koliko artiakal ima u %d korpi\n",i+1);
        fscanf( "%d",&k[i].broj_artikala);
        for(j=0;j<k[i].broj_artikala;j++)
        {
            //printf("unesi artikala (naziv,kolicinu i cenu)\n");
            fscanf(f,"%s%d%f",k[i].a[j].naziv,&k[i].a[j].kolicina,&k[i].a[j].cena);
        }
    }
    fclose(f);
}
void racun(int n, Korpa k[n])
{
    int i,j;
    FILE *d;
    float s=0,prosecna_cena=0;
    d=fopen("racun.txt","w");
    fprintf(d,"--------UKUPAN RACUN---------\n");
    fprintf(d,"\n");
    for(i=0;i<n;i++)
    {
        fprintf(d,"SADRZAJ  %d. KORPE:\n\n",i+1);
        for(j=0;j<k[i].broj_artikala;j++)
        {
            fprintf(d,"%s %d %.2f\n",k[i].a[j].naziv,k[i].a[j].kolicina,k[i].a[j].cena);
            s+=k[i].a[j].kolicina*k[i].a[j].cena;
        }
            fprintf(d,"-----------------------------------\n");
            fprintf(d,"Ukupno:%.2f\n",s);
            fprintf(d,"\n");
            prosecna_cena+=s;
            s=0;
    }
    prosecna_cena=prosecna_cena/n;
    fprintf(d,"prosecna cena potrosacke korpe je %.2f",prosecna_cena);
    fclose(d);
}
int main()
{
    int n;
    n=broj_potrosackih_korpi();
    Korpa k[n];
    unesi_korpe(n,k);
    racun(n,k);
    return 0;
}
