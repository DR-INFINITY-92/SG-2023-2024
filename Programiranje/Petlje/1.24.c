#include<stdio.h>
#include<stdlib.h>
int main()

{
    int m=0,n,o=1,c;
    printf("unesi broj n\n");
    scanf("%d",&n);
   while(n>0)
   {
    
      c=n%10;
      if(c%2==0)
        c++;
      m=m+c*o;
      o=o*10;
      n=n/10;
      

   }
   printf("nakon transformacije broj je %d",m);
    return 0;
}