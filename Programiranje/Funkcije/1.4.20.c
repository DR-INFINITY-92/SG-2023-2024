#include<stdio.h>
#include<stdlib.h>
int stepen(int x,int m)
{
    int i,s=1;
    for(i=0; i<m; i++)
        s=s*x;
    return s;
}
int broj_cifara(int m)
{
    int broj_cifara=0;
    while(m!=0)
    {
        broj_cifara++;
        m=m/10;
    }
    return broj_cifara;

}
int Armstrong(int m)
{  
    int n,k,c,s=0;
    k=m;
    n=broj_cifara(m);
    while(m!=0)
    {
        c=m%10;
        s=s+stepen(c,n);
        m=m/10;
    }
    if(s==k)
        return 1;
    else    
        return 0;
    
}
int main()
{
    int n;
    p:
    printf("unesi broj n\n");
    scanf("%d",&n);
    if(n<10)
    {
        printf("pogresan unos prilkom unosa broja, broj mora da ima vise od 1 cifre\n");
        goto p;
    }
    if(Armstrong(abs(n))==1)
        printf("broj %d je Armstrongov\n",n);
    else 
        printf("broj %d nije Armstrongov \n",n);
    return 0;
}