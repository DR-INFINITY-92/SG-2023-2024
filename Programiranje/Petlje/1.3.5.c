#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,f;
    printf("unesi broj n\n");
    scanf("%d",&n);
    f=1;
    for(i=1;i<=n;i++)
    {
      f=f*i;
    }
    printf("Faktorijal iznosi %d",f);
    return 0;
}