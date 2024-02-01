#include<stdio.h>
#include<stdlib.h>
int broj_neparnih(int m)
{
    int br=0,c;
    while(m!=0)
    {
        c=m%10;
        if(c%2!=0)
            br++;
        m=m/10;
    }
    return br;  
}
int main()
{
    int n;
    while(1<2)
    {
        printf("unesi broj n\n");
        scanf("%d",&n);
        if(n==0)
            break;
        printf("u broju %d ima %d neparnih cifara\n",n,broj_neparnih(n));
    }
    return 0;
}