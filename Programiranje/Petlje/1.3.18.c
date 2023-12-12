#include<stdio.h>
#include<stdlib.h>
int main()
{
 int i,n,bpz=0;
 float x,prethodni_broj,trenutni_broj;
 printf("unesi koliko brojeva imas za ispitivanje\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
    printf("unesi %d. broj\n",i+1);
    scanf("%f",&x);
    if(i==0)
    {
        prethodni_broj=x;
        continue;
    }
    trenutni_broj=x;
    if(prethodni_broj/trenutni_broj<0)
    {
         bpz++;
         prethodni_broj=trenutni_broj;
    }
 }
 printf("broj promene znaka je %d",bpz);
return 0;
}    