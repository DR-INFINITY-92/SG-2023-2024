#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    char ime_vocke[20];
    int kolicina_vitamina_c;
} vocka;

int broj_vocki()
{
    int n;
    printf("unesi koliko ima vocki\n");
    scanf("%d",&n);
    return n;
}
void unesi_vocke(int n, vocka vocke_niz[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("unesi ime vocke %d\n",i);
        scanf("%s",&vocke_niz[i].ime_vocke);
        printf("unesi broj vitamina C vocke %d\n",i);
        scanf("%d",&vocke_niz[i].kolicina_vitamina_c);
    }
}
void ispis_vocke(int n, vocka vocke_niz[n])
{
    int i;
    printf("sve vocke i kolicina vitamina C koje sadrze\n");
    for(i=0;i<n;i++)
    {
        printf("%s   %d\n",vocke_niz[i].ime_vocke,vocke_niz[i].kolicina_vitamina_c);
    }
}
vocka vocka_sa_najvise_vitaminaC(int n,vocka vocke_niz[n])
{
    int i;
    vocka max;
    max=vocke_niz[0];
    for(i=1;i<n;i++)
    {
        if(vocke_niz[i].kolicina_vitamina_c>max.kolicina_vitamina_c)
            max=vocke_niz[i];
    }
    return max;
}
int main ()
{
    int n;
    vocka vocka_sa_najvise_vitamina_c;
    n=broj_vocki();
    vocka vocke_niz[n];
    unesi_vocke(n,vocke_niz);
    ispis_vocke(n,vocke_niz);
    vocka_sa_najvise_vitamina_c=vocka_sa_najvise_vitaminaC(n,vocke_niz);
    printf("vocka sa najvise vitamina c je %s i ona ima %dmg vitamina C",vocka_sa_najvise_vitamina_c.ime_vocke,vocka_sa_najvise_vitamina_c.kolicina_vitamina_c);

    return 0;
}
    
