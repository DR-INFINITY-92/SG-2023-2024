#include<stdio.h>
#include <stdlib.h>
int main ()
{
    int a,b,c,s;
    printf("unesi broj a\n");
    scanf("%d",&a);
    printf("unesi broj b\n");
    scanf("%d",&b);
    printf("unesi broj c\n");
    scanf("%d",&c);
    s=0;
    if(a>0)
        s=s+a;
    if(b>0)
        s=s+b;
    if(c>0)
        s=s+c;
    printf("suma pozitivnih brojeva je %d\n",s);
    return 0;
}