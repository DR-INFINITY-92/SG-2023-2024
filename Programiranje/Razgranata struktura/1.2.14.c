#include<stdio.h>
#include <stdlib.h>
int main ()
{
    int n,j,s,d;
    p:
    printf("unesi celi trocifreni broj broj\n");
    scanf("%d",&n);
    if(n>99 && n<1000)
    {
       j=n%10;
       n=n/10;
       d=n%10;
       n=n/10;
       s=n%10;
       if(j>d && j>s)
       {
        if(d<s)
            n=s*100+j*10+d;
        else
            n=j*100+d*10+s;
       }
       else
       {
         if(d>j && d>s)
         {
            if(j<s)
                n=s*100+j*10+d;
            else
                n=d*100+s*10+j;
         }
         else
         {
            if(d<j)
                n=d*100+s*10+j;
            else
                n=j*100+d*10+s;
         }
       }
    }
    else
    {
        printf("niste uneli trocifreni broj unesi opet\n");
        goto p;
    }
    printf("broj nakon zamene cifara je %d\n",n);
    return 0;
}