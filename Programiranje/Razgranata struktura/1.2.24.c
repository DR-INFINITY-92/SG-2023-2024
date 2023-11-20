#include<stdio.h>
#include <stdlib.h>
int main ()
{
  float rezultat;
  int a,b;
  char operacija;
  
  printf("unesi broj a\n");
  scanf("%d",&a);
  p:
  printf("unesi operaciju\n");
  scanf(" %c",&operacija);
  if(operacija=='+' || operacija=='-' || operacija=='*' || operacija=='/' || operacija=='%')
  {
    t:
    printf("unesi broj b\n");
    scanf("%d",&b);
    if(operacija=='+')
        rezultat=a+b;
    else
        if(operacija=='-')
            rezultat=a-b;
        else
            if(operacija=='*')
                rezultat=a*b;
            else    
                if(operacija=='/')
                {
                    if(b==0)
                    {
                        printf("ne deli se sa nulom unesi opet\n");
                        goto t;
                    }
                    else
                           rezultat=1.0*a/b;
                }
                    
                else
                    rezultat=a%b;
        printf("rezultat je %.2f",rezultat);
  }
  else
  {
    printf("unesli ste nepostojecu operaciju \n");
        goto p;
  }
    return 0;
}