#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r;
    float O,P;
    const float Pi=3.14;
    for(r=0;r<=10;r++)
    {
        O=2*r*Pi;
        P=r*r*Pi;
        printf("O%d=%.2f\n",r,O);
        printf("P%d=%.2f\n",r,P);
    }
}