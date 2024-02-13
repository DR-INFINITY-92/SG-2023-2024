#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float stepen(float k, int m)
{
    float s=1;
    int i,n;  /*k=2 m=3 */
    n=abs(m);
    for(i=0;i<n;i++)   
        s=s*k;   /*i=0 s=2 i=1 s=4 i=2 s=8*/
    if(m<0)
        return 1.0/s;
    else    
        return s;
}
int  main()
{
    float x,s;
    int n;
    printf("unesi vrednost broja x:\n");
    scanf("%f",&x);
    printf("unesi stepen na koji zelis da podignes x\n");
    scanf("%d",&n);
    s=stepen(x,n);  /*2,3*/
    printf("broj %.4f ^ %d je %.4f",x,n,s);
    return 0;
}