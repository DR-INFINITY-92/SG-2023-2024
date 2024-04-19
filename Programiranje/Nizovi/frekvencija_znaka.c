#include<stdio.h>
#include<stdlib.h>

int unesi_duzinu_reci()
{
    int n;
    printf("unesi koliko rec ima slova\n");
    scanf("%d",&n);
    return n;
}
void frekvencija_znaka(int n, char x[n])
{
    int i,b=0;
    char p;
    printf("unesi slovo koje trazis u reci\n");
    scanf(" %c",&p);
    for(i=0;i<n;i++)
        if (p==x[i])
            b++;
    printf("%c %d",p,b);

}
int main()
{
    int n;
    n=unesi_duzinu_reci();
    char x[n];
    printf("unesi rec\n");
    scanf("%s",&x);
    frekvencija_znaka(n,x);
    return 0;
}