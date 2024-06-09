#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char ime[20];
    float prosecna_ocena;
    int ocene[9];

}djak;

int ukupan_broj_djaka()
{
    int n;
    printf("unesi koliko djaka ima ukupno\n");
    scanf("%d",&n);
    return n;
}
void unos_podataka_o_djacima(int n, djak x[n])
{
    int i,j,s=0;
    for(i=0;i<n;i++)
    {
        printf("unesi ime %d djaka\n",i+1);
        scanf("%s",x[i].ime);
        for(j=0;j<9;j++)
        {
            printf("unesi %d. ocenu za ucenika sa imenom %s\n",j+1,x[i].ime);
            scanf("%d",& x[i].ocene[j]);
            s+=x[i].ocene[j];
        }
        for(j=0;j<9;j++)
            if(x[i].ocene[j]==1)
            {
                x[i].prosecna_ocena=1;
                break;
            }
        else
            x[i].prosecna_ocena=(1.0*s)/9;
        s=0;
    }
}
void ispisi_nedovoljne_i_odlicne(int n, djak x[n])
{
    int i;
    printf("nedovoljni ucenici su\n");
    for(i=0;i<n;i++)
    {
        if(x[i].prosecna_ocena==1.0)
            printf("%s\n",x[i].ime);
    }
      printf("odlecni ucenici su\n");
    for(i=0;i<n;i++)
    {
        if(x[i].prosecna_ocena>=4.5)
            printf("%s\n",x[i].ime);
    }
}
int main()
{
    int n;
    n=ukupan_broj_djaka();
    djak x[n];
    unos_podataka_o_djacima(n,x);
    ispisi_nedovoljne_i_odlicne(n,x);

    return 0;
}
