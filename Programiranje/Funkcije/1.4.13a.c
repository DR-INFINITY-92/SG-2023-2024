#include<stdio.h>
#include<stdlib.h>
int sve_parne(int m)
{  
    int c;
    while(m!=0)
    {
        c=m%10;
        if (c % 2 != 0) 
            return 0;
        m=m/10;
    }
    return 1;
}
int main()
{
    int n;
    printf("unesi broj n\n");
    scanf("%d",&n);
    if(sve_parne(abs(n))==1)
        printf("cifre broja %d su sve parne\n",n);
    else 
        printf("cifre broja %d nisu sve parne\n",n);
    return 0;
}