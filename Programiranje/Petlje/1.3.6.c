#include<stdio.h>
#include<stdlib.h>
int main()
{
 int n,i;
 float x,s;
 printf("Unesi broj x\n");
 scanf("%f",&x);
 p:
 printf("Unesi broj n koji predstavlja stepen\n");
 scanf("%d",&n);
 if(n<0)
 {
   printf("Greska: pogresan unos\n");
   goto p;
 }
 s=1;
 for(i=0;i<n;i++) /*n=3 a x=2 s=8 i=0,1,2,3  i=0, s=2 i=1 s=4 i=2 s=8*/
 {
    s=s*x;
 }
 printf("%.2f",s);
    return 0;
}    