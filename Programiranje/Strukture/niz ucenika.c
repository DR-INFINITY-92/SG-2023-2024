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
    ucenik x[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("unesi ime ucenika\n");
        scanf("%s",&ucenici[i].ime);
        printf("unesi prezime ucenika\n");
        scanf("%s",&ucenici[i].prezime);
        printf("unesi jmbg ucenika\n");
        scanf("%li",&ucenici[i].jmbg);
        printf("unesi prosek ucenika\n");
        scanf("%f",&ucenici[i].prosek);
    }
    printf("          SVI UCENICI ODELJENJA \n");
    printf("ime\t prezime\t jmbg\t prosek\t\n");
    for(i=0;i<5;i++)
    {
        printf("%s\t %s\t %li\t %.2f\t\n",ucenici[i].ime,ucenici[i].prezime,ucenici[i].jmbg,ucenici[i].prosek);
    }
    
    return 0;
}