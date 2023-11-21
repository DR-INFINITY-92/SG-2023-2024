#include<stdio.h>
#include <stdlib.h>
int main ()
{
  int n,j,d,s,h;
  p:
  printf("unesi cetvorocifreni broj\n");
  scanf("%d",&n);
  if (n<1000 || n>9999)
  {
    printf("pogresan unos broja\n");
    goto p;
  }
  j=n%10;
  n=n/10;
  d=n%10;
  n=n/10;
  s=n%10;
  n=n/10;
  h=n%10;
  n=n/10;
  if (h>s && s>=d && d>=j)
  printf("cifre su opadajuce");
  else
    if (h<s && s<=d && d<=j)
        printf("cifre su rastuce");
    else
        printf("cifre nisu ni rastuce ni opadajuce");
    return 0;
}