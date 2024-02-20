#include<stdio.h>
#include<stdlib.h>
int uradi_nesto(int a)
{
    a=10;
    return a;
}
int main()
{
    int a;
    a=5;
    printf("a=%d\n",a);
    a=uradi_nesto(a);
    printf("a=%d\n",a);
    return 0;
}