#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,cifra,zbir_cifara;
    printf("unesi celi broj n\n");
    scanf("%d",&n);
    printf("cifre broja %d su:\n",n);
    zbir_cifara=0;
    while(n!=0)
    {
        cifra=n%10;
        n=n/10;
        zbir_cifara=zbir_cifara+cifra;
    }
     printf("zbir cifara broja je %d ",zbir_cifara);
    return 0;
}