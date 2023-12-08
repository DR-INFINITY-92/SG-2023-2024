#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,cifra;
    printf("unesi celi broj n\n");
    scanf("%d",&n);
    printf("cifre broja %d su:\n",n);
    for(i=1;i>0;i++)
    {
        if(n!=0)
        {
            cifra=n%10;
            n=n/10;
            printf(" %d ",cifra);
        }
        else
        {
            break;
            printf("hahah");
        }
            
    }
    return 0;
}