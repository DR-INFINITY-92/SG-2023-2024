#include<stdio.h>
#include<stdlib.h>
void uradi_nesto(int a)
{
    a=10;
    printf("ovo je vrednost a unutar funkcije uradi nesto%d\n",a);
}
int main()
{
    int a;
    a=5;
    printf("a=%d\n",a);
    uradi_nesto(a);
    printf("a=%d\n",a);
    return 0;
}