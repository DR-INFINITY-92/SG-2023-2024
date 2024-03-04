#include <stdio.h>
#include <stdlib.h>
int par_nepar(int n)
{
    int c1,c2,f=1;

    while(n!=0)
    {
       c1=n%10;
       n=n/10;
       c2=n%10;
       if(c1%2==0 && c2%2!=0&& c1!=c2)
       {

       c1=n%10;
       n=n/10;
       c2=n%10;
       n=n/10;
       if(c1==c2)
       {
           n=n/10;

       }
       else
       {
        return 1;
       }


       }


        if(c1%2!=0 && c2%2==0 && c1!=c2)
        {
          c1=n%10;
          n=n/10;
          c2=n%10;
          n=n/10;
          if(c1==c2)
       {

           n=n/10;
       }
       else
       {
         return 1;
       }

        }



        if(c1%2==0 || c1%2!=0 && c1!=c2)
        {
          c1=n%10;
          n=n/10;
          c2=n%10;
          n=n/10;
          if(c1==c2)
       {
           return 0;
       }
          return 1;
        }


        if(c2%2==0 || c2%2!=0 && c1!=c2)
        {  c1=n%10;
            n=n/10;
           c2=n%10;
           n=n/10;
           if(c1==c2)
       {
           return 0;
       }
          return 1;
        }
        if(c1%2==0 || c1%2!=0 && c1!=c2)
        {
            c1=n%10;
            n=n/10;
            c2=n%10;
            n=n/10;
            if(c1==c2)
       {
           return 0;
       }
           return 1;

        }
        if(c1==c2)
        {
            c1=n%10;
            n=n/10;
           c2=n%10;
            n=n/10;
          return 0;

        }












}
   return 0;
}

int main()
{
    int n,f;
    printf("Unesi broj n\n");
    scanf("%d",&n);
    f=par_nepar(n);
    if(f==1)
        printf("Broj ispunjava uslov\n");
    else
        if(f==0)
        printf("Broj ne ispnjava uslov\n");
    return 0;
}