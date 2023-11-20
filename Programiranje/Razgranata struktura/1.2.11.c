#include<stdio.h>
#include <stdlib.h>
int main ()
{
    int n,j,s,h,d;
    p:
    printf("unesi celi cetvrocifreni broj broj\n");
    scanf("%d",&n);
    if(n>999 && n<10000)
    {
       j=n%10;
       n=n/10;
       d=n%10;
       n=n/10;
       s=n%10;
       n=n/10;
       h=n%10;
       if(j>d && j>s && j>h)
            printf("najveca cifra je %d",j);
        else
            if(d>j && d>s && d>h)
                printf("najveca cifra je %d",d);
            else
                if(s>d && s>j && s>h)
                    printf("najveca cifra je %d",s);
                else
                    printf("najveca cifra je %d",h);
    }
    else
    {
        printf("niste uneli cetvorocifreni broj unesi opet/n");
        goto p;
    }
    return 0;
}