#include<stdio.h>
#include<stdlib.h>
int main()
{
 int m,n,indikator=0;
 printf("unesi celi broj\n");
 scanf("%d",&n);
 m=n;
 n=abs(n);
 while(n!=0)
 {
    if(n%10==5)
    {
        indikator++;
        break;
    }
    else
        n=n/10;
 }
 if(indikator==0)
    printf("broj %d u svom zapisu ne sadrzi cifru 5\n",m);
 else
    printf("broj %d u svom zapisu sadrzi cifru 5",m);
return 0;
}    