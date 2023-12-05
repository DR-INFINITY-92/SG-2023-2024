#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,m;
    p:
    printf("unesi n\n");
    scanf("%d",&n);
    printf("unesi m\n");
    scanf("%d",&m);
    if(m<n)
    {
        printf("pogresan unos aj opet\n");
        goto p;
    }
    for (i=n;i<=m;i++)
        printf("%3d",i);
    return 0;
}