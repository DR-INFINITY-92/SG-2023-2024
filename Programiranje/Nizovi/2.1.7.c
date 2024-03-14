#include<stdio.h>
#include<stdlib.h>


void ispis_niza_unazad(int n,char a[n])
{
    int i;
    for(i=n-1;i>=0;i++)
    {
         printf(" a[%d]=%c ",i,a[i]);
    }
}
int broj_elemenata_niza()
{
    int n;
    printf("unesi koliko niz ima elemenata\n");
    scanf("%d",&n);
    return n;
}
int napravi_niz(int n, char a[n])
{
    int i=0;
    char c;
    while(1<2)
    {
        printf("unesi znak \n");
        scanf(" %c",&c);
        if(c=='*')
            break;
        a[i]=c;
        i++;
    }
    return i;
}
int main()
{
    int n,br;
    n=broj_elemenata_niza();
    char a[n];
    br=napravi_niz(n,a);
    ispis_niza_unazad(br,a);
    return 0;
}
