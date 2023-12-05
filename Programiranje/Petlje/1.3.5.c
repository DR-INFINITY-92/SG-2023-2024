#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,f;
    p:
    printf("unesi broj n\n");
    scanf("%d",&n);
    if(n<0)
    {
      printf("Greska los uns broja n \n");
      goto p;
    }
    f=1;
    for(i=1;i<=n;i++) /*za n=4 i ima sledece vrednosti i=1,2,3,4*/
    {
      f=f*i; /*za  i=1 f=1 za i=2 f=2 za i=3 f=6 za i=4 f=24*/
    }
    printf("Faktorijal iznosi %d",f);
    return 0;
}