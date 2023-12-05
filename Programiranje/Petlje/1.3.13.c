#include<stdio.h>
#include<stdlib.h>
int main()
{
 int n,i,x;
 float s;
 printf("unesi koliko brojeva zelis da uneses n\n");
 scanf("%d",&n);
 s=0;
 for(i=0;i<n;i++)
 {
    printf("unesi %d. broj ",i+1);
    scanf("%d",&x);
    if(x%2!=0 && x<0)
    {
        s=s+x;
    }
 }
 printf("%f",s);
    return 0;
}    