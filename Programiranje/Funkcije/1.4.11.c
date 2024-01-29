#include<stdio.h>
#include<stdlib.h>
int sadrzi(int x, int c)
{
    while(x!=0)
    {
        if(x%10==c)
            return 1;
        x=x/10;
    }
    return 0;  
}
int main()
{
    int n,c;
    printf("unesi celi broj n\n");
    scanf("%d",&n);
    p:
    printf("unesi ceo broj c\n");
    scanf("%d",&c);
    if(c<0 || c>9)
    {
        printf("pogresn unos cifra mora da bude jednocifreni celi broj\n");
        goto p;
    }
    if(sadrzi(abs(n),c)==1)
        printf("u broj %d nalazi se cifra %d",n,c);
    else
        printf("u broj %d ne nalazi se cifra %d",n,c);
    return 0;
}