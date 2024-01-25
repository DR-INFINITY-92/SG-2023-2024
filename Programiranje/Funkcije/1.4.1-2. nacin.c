#include<stdio.h>
#include<stdlib.h>
int min_dva_broja(int x, int y,)
{
    if(x<y)
        return x;
    else    
        return y;
            
}
int  main()
{
    int x,y,z,m;
    printf("unesi celi broj x\n");
    scanf("%d",&x);
    printf("unesi celi broj y\n");
    scanf("%d",&y);
    m=min_dva_broja(x,y);
    
    printf("najmanji broj od unetih je %d",m);
    return 0;
}