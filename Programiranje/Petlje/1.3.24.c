#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m=0,tc=1,c;
    printf("unesi celi broj n\n");
    scanf("%d",&n);
    while(n>0)
    {
        c=n%10;
        if(c%2==0)
            c++;
        m=m+c*tc;
        tc=tc*10;
        n=n/10;

    }
    printf("nakon transformacije broj je %d\n",m);
    return 0;
}
