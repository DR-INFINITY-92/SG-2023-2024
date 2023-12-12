#include<stdio.h>
#include<stdlib.h>
int main()
{
 int x,p=1,i,buc=0,b2=0,b3=0; /*buc brojac unetih cifara svih, b2 brojac nenultih cifara b3 brojac negativnih cifara*/
 while(4<5)
 {
    printf("unesi celi broj\n");
    scanf("%d",&x);
    buc++;
    if(x==0)
    {
        
        break;
    }
    else
    {
        if(x>0)
        {
            b2++;
            p=p*x;
        }
        else
        {
            b3++;
        }
         
    }
 }
 if(buc==1 && b2==0)
    printf("nije unet nijedan broj odma je unesena nula\n");
else
{
    if(b3!=0 && b2==0)
        printf("medju unetim ciframa nema nijedne pozivitne\n");
    else
         printf("prozivod unetih brojeva je %d",p);
}
return 0;
}    