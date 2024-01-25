#include<stdio.h>
#include<stdlib.h>
int min_tri_broja(int x, int y, int z)
{
    int m;
    if(x<y && x<z)
        m=x;
    else    
        if(y<x && y<z)
            m=y;
        else    
            m=z;
    return m;
}
int  main()
{
    int x,y,z,m;
    printf("unesi celi broj x\n");
    scanf("%d",&x);
    printf("unesi celi broj y\n");
    scanf("%d",&y);
    printf("unesi celi broj z\n");
    scanf("%d",&z);
    m=min_tri_broja(x,y,z);
    printf("najmanji broj od unetih je %d",m);
    return 0;
}