#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float prebrojavanje(float m)
{
    int br=0;
    float x;
    while(1<2)
    {
        printf("unesi broj\n");
        scanf("%f",&x);
        if (x==0)
            break;
        if(m==x)
            br++;
    }
    return br;
}
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