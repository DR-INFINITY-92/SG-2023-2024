#include<stdio.h>
#include<stdlib.h>
int neopadajuce(int m)
{  
    int cp,ct;
    cp=m%10;
    m=m/10;
    while(m!=0)
    {
        ct=m%10;
        if(ct>cp)
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
    if(neopadajuce(abs(n))==1)
        printf("cifre broja %d su u rastucem poretku\n",n);
    else 
        printf("cifre broja %d nisu u rastucem poretku \n",n);
    return 0;
}