#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    p:
    printf("unesi do kog broja zelis da se ispisu brojevi od pocevsi od 0\n");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("pogresan unos molim vas unesite opet\n");
        goto p;
    }
    for(i=0;i<=n;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}