#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m,i;
    printf("unesi broj m \n");
    scanf("%d",&m);
    printf("unesi broj n \n");
    scanf("%d",&n);
    for(i=n;i<m;i++)
    {
        printf("%5d",i);
    }

    return 0;
}