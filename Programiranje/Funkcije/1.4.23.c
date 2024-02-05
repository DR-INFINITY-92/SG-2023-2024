#include<stdio.h>
#include<stdlib.h>
void  sifruj(int m)
{ 
    char c;
    while(1<2)
    {  
        scanf(" %c",&c);
        if(c=='/')
            break;
        else
        {
             if(c>64 && c<91 || c>96 && c<122)
                printf("%c\n", c+m);
            else
                printf("%c\n", c);
        }
    }
}
int main()
{
    int k;
    printf("unesi broj k\n");
    scanf("%d", &k);
    sifruj(k);
    return 0;
}