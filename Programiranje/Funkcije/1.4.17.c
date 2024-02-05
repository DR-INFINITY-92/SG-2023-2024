#include<stdio.h>
#include<stdlib.h>
int par_nepar(int m)
{  
    int cp,ct;
    cp=m%10;
    m=m/10;
    while(m!=0)
    {
        ct=m%10;
        if(ct%2==cp%2)
            return 0;
        cp=ct;
        m=m/10;
    }
    return 1;
}
int main()
{
    int n;
    printf("unesi broj n\n");
    scanf("%d",&n);
    if(par_nepar(abs(n))==1)
        printf("cifre broja %d su par_nepar\n",n);
    else 
        printf("cifre broja %d nisu par nepar \n",n);
    return 0;
}