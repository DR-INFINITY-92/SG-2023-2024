#include<stdio.h>
#include<stdlib.h>
void uradi_nesto(int *a)
{
    *a=10;
}
int main()
{
    int a;
    a=5;
    printf("a=%d\n",a);
    uradi_nesto(&a);
    printf("a=%d\n",a);
    return 0;
}