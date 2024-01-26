#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float razlomljeni_deo(float k)
{
    float rd;
    rd=k-(int)k;
    return rd;
}
int  main()
{
    float x,rd;
    printf("Unesite broj x:\n ");
    scanf("%f",&x);
    rd=razlomljeni_deo(x);
    printf("deo iza zareza broja %.6f je %.6f",x,fabs(rd));
    return 0;
}