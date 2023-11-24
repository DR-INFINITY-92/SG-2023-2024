#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x1,y1,x2,y2;
    p:
    printf("unesi x i y koordinatu prvog lovca\n");
    scanf("%d%d",&x1,&y1);
    printf("unesi x i y koordinatu drugog lovca\n");
    scanf("%d%d",&x2,&y2);
    if(x1<1 || x2<1 || y1<1 || y2<1 ||x1>8 || x2>8|| y1>8 || y2>8)
    {
        printf("greska koordinate figura moraju biti u opsegu od 1-8\n");
        goto p;
    }
    else
    {
        if(x1==x2 && y1==y2)
        {
            printf("greska nemogu da figure budu na istom polju\n");
            goto p;
        }
        else
        {
            if(abs(x2-x1)==abs(y2-y1))
                printf("lovci se napadaju\n");
            else
                 printf("lovci se ne napadaju\n");
        }
    
    }
    
}