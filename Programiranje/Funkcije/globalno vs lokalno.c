#include<stdio.h>
#include<stdlib.h>
int a;
void uradi_nesto(int a)
{
    a=10;
}
int main()
{
    a=5;
    printf("a=%d\n",a);
    uradi_nesto(a);
    printf("a=%d\n",a);
    return 0;
}