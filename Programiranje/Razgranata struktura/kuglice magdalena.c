#include<stdio.h>
#include<stdlib.h>
int main()
{
    int c1,p1,c2,p2,pom=0;
    printf("unesi broj crvenih kuglica u 1. kutiji \n");
    scanf("%d",&c1);
    printf("unesi broj plavih kuglica u 1. kutiji \n");
    scanf("%d",&p1);
    printf("unesi broj crvenih kuglica u 2. kutiji \n");
    scanf("%d",&c2);
    printf("unesi broj plavih kuglica u 2. kutiji \n");
    scanf("%d",&p2);
    if(c1>p1)
    {
        pom=pom+p1;
        if(c2>p2)
        {
            pom=pom+p2;
        }
        else    
        {
            pom=pom+c2;
        }
    }
    else
    {
        pom=pom+c1;
        if(c2>p2)
        {
            pom=pom+p2;
        }
        else    
        {
            pom=pom+c2;
        }
    }
    printf("ukupan broj pomeraja kuglica je %d\n",pom);
    return 0;
}