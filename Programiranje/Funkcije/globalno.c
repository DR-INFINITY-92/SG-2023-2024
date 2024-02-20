#include<stdio.h>
#include<stdlib.h>
int a; /*globalna promenljiva*/
void uradi_nesto()
{
    a=5;
}
int main()
{
    a=10;
    printf("a=%d\n",a);
    uradi_nesto();
    printf("a=%d\n",a);
    return 0;
}