#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    char ime[20];
    char prezime[20];
    long int jmbg;
    float prosek;
} ucenik;



int main ()
{
    ucenik pera,mika,zika;
    printf("unesi ime ucenuika\n");
    scanf("%s",&pera.ime);
    printf("unesi prezime ucenuika\n");
    scanf("%s",&pera.prezime);
    printf("unesi jmbg ucenuika\n");
    scanf("%li",&pera.jmbg);
    printf("unesi prosek ucenuika\n");
    scanf("%f",&pera.prosek);
    printf("unesi ime ucenuika\n");
    scanf("%s",&mika.ime);
    printf("unesi prezime ucenuika\n");
    scanf("%s",&mika.prezime);
    printf("unesi jmbg ucenuika\n");
    scanf("%li",&mika.jmbg);
    printf("unesi prosek ucenuika\n");
    scanf("%f",&mika.prosek);
    printf("unesi ime ucenuika\n");
    scanf("%s",&zika.ime);
    printf("unesi prezime ucenuika\n");
    scanf("%s",&zika.prezime);
    printf("unesi jmbg ucenuika\n");
    scanf("%li",&zika.jmbg);
    printf("unesi prosek ucenuika\n");
    scanf("%f",&zika.prosek);

    printf("           ucenici:\n");
    printf("ime\t prezime\t jmbg\t prosek\t\n");
    if(pera.prosek>=4.5)
        printf("%s\t %s\t %li\t %.2f\t\n",pera.ime,pera.prezime,pera.jmbg,pera.prosek);
     if(mika.prosek>=4.5)
        printf("%s\t %s\t %li\t %.2f\t\n",mika.ime,mika.prezime,mika.jmbg,mika.prosek);
     if(zika.prosek>=4.5)
        printf("%s\t %s\t %li\t %.2f\t\n",zika.ime,zika.prezime,zika.jmbg,zika.prosek);
    return 0;
}