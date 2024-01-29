#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "funkcije.h"
int main()
{
    float n;
    int b;
    printf("unesi broj n\n");
    scanf("%f",&n);
    b=prebrojavanje(n);
    printf("medju unetim brojevima broj %.2f se pojavljuje %d puta",n,b);
    return 0;
}