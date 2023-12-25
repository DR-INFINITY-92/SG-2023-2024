#include<stdio.h>
#include<stdlib.h>
int main() 
{
    int n,m=0,tc=1,b=1,c;
    printf("unesi broj n\n");
    scanf("%d",&n);
    while (n>0)
    {
        c=n%10;
        if(b%2!=0)
        {
            m=m+c*o;
            tc=tc*10;
        }
        b++;
        n=n/10;
    }
    printf("%d\n",m);

}