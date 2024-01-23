#include<stdio.h>
#include<stdlib.h>
void zdravo()
{
    printf("zdravo svima\n");
}
void pozdravi_peru()
{
    printf("zdravo perooo\n");
}
float povrsina_kruga(float k)
{
    float Pi=3.14,P;
    P=k*k*Pi;
    return P;
}
int main()
{
    float r,O,P;
    printf("unesi polupresnicnik kruga\n");
    scanf("%f",&r);
    P=povrsina_kruga(r);
    printf("povrsina kruga je %f \n",P);
    return 0;
}  