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
       if(h>s && s>=d && d>=j)
       {
            printf("broj je u opadajucem poretku");
       }
        else
        {
            if(h<s && s<=d && d<=j)
                printf("broj je u rastucem poretku\n");
            else
                printf("nije ni rastuci ni opadajuci\n");
        }
    }
    else
    {
        printf("niste uneli cetvorocifreni broj unesi opet/n");
        goto p;
    }
    return 0;
}