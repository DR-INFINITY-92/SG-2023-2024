#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    p:
    printf("unesi koliko zelis puta da ti se ispise ova recenica\n");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("pogresan unos molim vas unesite opet\n");
        goto p;
    }
    for(i=0;i<n;i++)
    {
        printf("Mi volimo da programiramo\n");
    }
    return 0;
}