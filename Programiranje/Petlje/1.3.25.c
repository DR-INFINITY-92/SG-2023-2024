#include<stdio.h>
#include<stdlib.h>
void  main() 
{
    int n,m=0,tc=1,b=1,c;
    printf("unesi broj n\n");
    scanf("%d",&n);
    while (n>0)  123456
    {
        c=n%10;
        if(b%2!=0)
        {
            m=m+c*tc; 
            tc=tc*10; 
        }
        b++;
        n=n/10;
    }
    printf("%d\n",m);

}return 0;