#include<stdio.h>
#include <stdlib.h>
int main ()
{
   int s,m,mu,dp;
   p:
   printf("unesi koliko ima sati trenutno\n");
   scanf("%d",&s);
    printf("unesi koliko ima minuta trenutno\n");
   scanf("%d",&m);
   if(s<0 || s>23 || m<0 || m>60)
   {
      printf("neispravan unos\n");
      goto p;
   }
   else
   {
    mu=s*60+m;
    dp=1440-mu;
   }
   printf("do ponoci ima jos %dh:%dm",dp/60,dp%60);
    return 0;
}