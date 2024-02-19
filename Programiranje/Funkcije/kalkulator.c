#include<stdio.h>
#include<stdlib.h>
float zbir(float x, float y)
{
    return x+y;
}
float razlika(float x, float y)
{
    return x-y;
}
float proizvod(float x, float y)
{
    return x*y;
}
float kolicnik(float x, float y)
{
    return x/y;
}
float digitron(float x, char o, float y)
{
    float r;
    if (o=='+')
        r=zbir(x,y);
    else
        if(o=='-')
            r=razlika(x,y);
        else
            if(o=='*')
                r=proizvod(x,y);
            else
                r=kolicnik(x,y);
    return r;
}
int  main()
{
    float x,y,r;
    char o;
    printf("unesi prvi broj\n");
    scanf("%f",&x);
    printf("unesi operaciju\n");
    scanf(" %c",&o);
    printf("unesi drugi broj\n");
    scanf("%f",&y);
    r=digitron(x,o,y);
    printf("r=%.2f\n",r);
    return 0;
}