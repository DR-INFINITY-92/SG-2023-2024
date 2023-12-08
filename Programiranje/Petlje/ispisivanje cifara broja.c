#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,cifra;
    printf("unesi celi broj n\n");
    scanf("%d",&n);
    printf("cifre broja %d su:\n",n);
    while(n!=0)
    {
        cifra=n%10;
        n=n/10;
        printf(" %d ",cifra);
    }
    return 0;
}