#include<stdio.h>
#include<stdlib.h>
int main()
{
   float nv,minnv,maxnv;
   p:
    printf("unesi nadmorsku visinu\n");
     scanf("%f",&nv);
     if(nv==0)
     {
        printf("niste uneli nijednu nadmorsku visinu\n");
        goto p;
     }
    minnv=nv;
    maxnv=nv;
   while(1<2)
   {
    printf("unesi nadmorsku visinu\n");
    scanf("%f",&nv);
    if(nv==0)
        break;
    if(nv<minnv)
        minnv=nv;
    if(nv>maxnv)
        maxnv=nv;
   }
    printf("minnv=%.2f\n",minnv);
    printf("maxnv=%.2f\n",maxnv);
    printf("razlika izmedju maksimalne i minimlane nv iznosi %.2f",maxnv-minnv);
    return 0;
}