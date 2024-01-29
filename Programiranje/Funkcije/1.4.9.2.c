#include<stdio.h>
#include<stdlib.h>
float apsolutna_vrednost(float k)
{
    if(k<0)
        return k*(-1);
    else
        return k;
}
int main()
{
    float x;
    printf("unesi broj x\n");
    scanf("%f",&x);
    printf("apsolutna vrednost broj %.2f je %.2f",x,apsolutna_vrednost(x));
    return 0;
}