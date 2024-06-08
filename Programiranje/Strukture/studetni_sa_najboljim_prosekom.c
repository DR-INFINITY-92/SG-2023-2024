#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char ime[20];
    char prezime[20];
    char smer;
    float prosek;

}student;

int broj_studenata()
{
    int k;
    printf("unesi ukupan broj koliko studenata ima\n");
    scanf("%d",&k);
    return k;
}
void unesi_studente(int n, student s[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("unesi ime studenta\n");
        scanf("%s",s[i].ime);
        printf("unesi prezime studenta\n");
        scanf("%s",s[i].prezime);
        p:
        printf("unesi naziv smera R I V N T M \n");
        scanf(" %c",&s[i].smer);
        if(s[i].smer=='R' || s[i].smer=='I' || s[i].smer=='V' || s[i].smer=='N' || s[i].smer=='T' || s[i].smer=='M')
        {
             printf("uensi prosek studenta\n");
            scanf("%f",&s[i].prosek);
        }
        else
        {
            printf("greska uneli ste nepostojeci smer\n");
            goto p;
        }
    }
}
void ispisi_sve_studente(int n, student s[n])
{
    int i;
    printf("SPISAK SVIH STUDENATA:\n\n");
    for(i=0;i<n;i++)
    {
        printf("%s %s %c %.2f\n",s[i].ime,s[i].prezime,s[i].smer,s[i].prosek);
    }
    printf("\n");
}
void ispis_studenata_za_dati_smer(int n,student s[n])
{
    int i;
    char smer;
    printf("unesi naziv smera sa kog zelis da ispisemo studente\n");
    scanf(" %c",&smer);
    printf("SVI STUDENTI SA %c SMERA:\n\n",smer);
    for(i=0;i<n;i++)
    {
        if(s[i].smer==smer)
            printf("%s %s\n",s[i].ime,s[i].prezime);
    }
}
void ispis_studenata_sa_maksimalnim_prosekom(int n,student s[n])
{
    int i;
    float max_prosek;
    max_prosek=s[0].prosek;
    for(i=1;i<n;i++)
    {
        if(s[i].prosek>max_prosek)
                max_prosek=s[i].prosek;
    }
    printf("SVI STUDENTE SA MAKSIMALNIM PROSEKOM\n");
    for(i=0;i<n;i++)
    {
        if(s[i].prosek==max_prosek)
            printf("%s %s, %c, %.2f\n",s[i].ime,s[i].prezime,s[i].smer,s[i].prosek);
    }
}
int main()
{
    int n;
    n=broj_studenata();
    student s[n];
    unesi_studente(n,s);
    ispisi_sve_studente(n,s);
    ispis_studenata_za_dati_smer(n,s);
    ispis_studenata_sa_maksimalnim_prosekom(n,s);
    return 0;
}
