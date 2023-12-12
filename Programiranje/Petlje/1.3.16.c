#include<stdio.h>
#include<stdlib.h>
int main()
{
 int n,b=0,s=0;
 float a;
 while(6>1)
 {
    printf("unesi broj\n");
    scanf("%d",&n);

    if(n==0)
    break;
    s=s+n;
    b++;
 }
if(b==0)
    printf("nema unetih brojeva");
    else
{
        a=1.0*s/b;
    printf("aritmeticka je %.4f",a);
}
return 0;
}    