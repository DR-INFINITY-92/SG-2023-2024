#include<stdio.h>
#include<stdlib.h>
int main()
{
 int n,x,i,s;
 printf("Unesi broj\n");
 scanf("%d",&x);
 printf("Unesi stepen broja n\n");
 scanf("%d",&n);
 s=1;
 for(i=0;i<n;i++)
 {
    s=s*x;
 }
 printf("%d",s);
    return 0;
}    