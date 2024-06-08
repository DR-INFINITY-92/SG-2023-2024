#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    char pol;
    int godine;
    int ocena;
} dete;

int broj_dece()
{
    int n;
    printf("Unesi koliko deteta ima u grupi u Vrticu\n");
    scanf("%d",&n);
    return n;
}
void ucitaj_podatke_o_deci(int n, dete d[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("unesi pol deteta m ili z\n");
        scanf(" %c",&d[i].pol);
        printf("unesi godine za dete od 3-6\n");
        scanf("%d",&d[i].godine);
        printf("unesi koju ocenu je dete dalo vrticu od 1-5\n");
        scanf("%d",&d[i].ocena);
        if(d[i].pol!='m'&& d[i].pol!='z'||d[i].godine<3||d[i].godine>6||d[i].ocena<1||d[i].ocena>5)
        {
            printf("greska prilikom unosa\n");
            i--;
        }
    }
}
void statistika(int n, dete d[n])
{
    char pol;
    int godine,i,s=0,bd=0;
    float prosecna_ocena;
    printf("unesi pol deteta za statistiku\n");
    scanf(" %c",&pol);
    printf("unesi godine deteta za statistiku\n");
    scanf("%d",&godine);
    printf("ocene dece uzrssta %d godina i pola %c su:\n",godine,pol);
    for(i=0;i<n;i++)
    {
        if(d[i].pol==pol&&d[i].godine==godine)
        {
              s=s+d[i].ocena;
              bd++;
        }
    }
    prosecna_ocena=(1.0*s)/bd;
    printf("deca %c pola i %d godina ocenili su vrtic prosecnom ocenom %.3f",pol,godine,prosecna_ocena);
}


int main ()
{
    int n;
    n=broj_dece();
    dete d[n];
    ucitaj_podatke_o_deci(n,d);
    statistika(n,d);
    return 0;
}
    
