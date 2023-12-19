#include<stdio.h>
#include<stdlib.h>
int main()
{
   float nv,minnv,maxnv;
    printf("unesi nadmorsku visinu\n");
     scanf("%f",&nv);
    minnv=nv;
    maxnv=nv;
   while(1<2)
   {
    printf("unesi nadmorsku visinu\n");
    scanf("%f",&nv);
    if(nv<minnv)
        minnv=nv;
    if(nv<maxnv)
        maxnv=nv;
   }

    return 0;
}