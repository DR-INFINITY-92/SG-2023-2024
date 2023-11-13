#include<stdio.h>
#include <stdlib.h>
int main ()
{
    int a,b,c,uc,cp,u;
    p:
    printf("unesi broj a\n");
    scanf("%d",&a);
    printf("unesi broj b\n");
    scanf("%d",&b);
    printf("unesi broj c\n");
    scanf("%d",&c);
    if(a<0 || b<0 || c<0)
    {
        printf("pogresan unos cene\n");
        goto p;
    }
    else
    {
        if(a<=b && a<=c)
        {
             cp=b+c+1;
        }
        else
        {
            if(b<=a && b<=c)
            {
                   cp=a+c+1;
            }
            else
            {
                  cp=a+b+1;
            }
        }
        uc=a+b+c;
        u=uc-cp;
    }
 
    printf("Ukupna cena = %d\n",uc);
    printf("Cena sa popustom = %d\n",cp);
    printf("Usteda = %d\n",u);
    return 0;
}