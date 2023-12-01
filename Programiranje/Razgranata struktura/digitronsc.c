#include<stdio.h>
#include <stdlib.h>
int main ()
{
  float rezultat;
  int a,b;
  char operacija;
  p:
  printf("unesi broj a\n");
  scanf("%d",&a);

  
  printf("unesi operaciju\n");
  scanf(" %c",&operacija);
    printf("unesi broj b\n");
  scanf("%d",&b);
  switch(operacija)
    {
        case '+':
            rezultat=a+b;
        break;
        case '-':
        rezultat=a-b;
        break;
        case '*':
        rezultat=a*b;
        break;
        case '/':
                if(b==0)
                    {
                        printf("ne deli se sa nulom unesi opet\n");
                        goto p;
                    }
                    else
                    {
                        rezultat=1.0*a/b;
                    }
        break;
        default :
            printf("greska u unosu\n");
            goto p;
            break;
    }
    return 0;
}