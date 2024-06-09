#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char ime[20];
    char prezime[20];
    char email[30];
}osoba;
int broj_osoba()
{
    int n;
    printf("unesi koliko ima osoba\n");
    scanf("%d",&n);
    return n;
}
void unesi_podatke_o_osobama(int n, osoba o[n])
{
    int i;
    FILE *f;
    f = fopen("podaci_o_osobama2.txt","r");
    for(i=0;i<n;i++)
        fscanf(f,"%s%s%s",o[i].ime,o[i].prezime,o[i].email);
    fclose(f);
}
void ispisi_podatke_o_osobama(int n, osoba o[n])
{
    int i;
    for(i=0;i<n;i++)
        printf("%s %s %s\n",o[i].ime,o[i].prezime,o[i].email);
}
void ispisi_osobe_sa_odredjenim_mejlom(int n,osoba o[n])
{
    int i,br=0;
    char email[30];
    printf("unesi vrstu mejla za prikaz studenata sa tom vrsto mejla\n");
    scanf("%s",email);
    FILE *d;
    d=fopen("ispis_osoba_sa_mejlom.txt","w");
    for(i=0;i<n;i++)
    {
        if(strstr(o[i].email,email)!=0)
        {
            br++;
            printf("%s %s %s\n",o[i].ime,o[i].prezime,o[i].email);
            fprintf(d,"%s %s %s\n",o[i].ime,o[i].prezime,o[i].email);

        }

    }
    if(br==0)
    {
        printf("nema nijede osobe koja ima meijl koji je %s",email);
        fprintf(d,"nema nijede osobe koja ima meijl koji je %s",email);
    }
    fclose(d);
}
int main()
{
    int n;
    n=broj_osoba();
    osoba o[n];
    unesi_podatke_o_osobama(n,o);
    //ispisi_podatke_o_osobama(n,o);
    ispisi_osobe_sa_odredjenim_mejlom(n,o);
    return 0;
}
