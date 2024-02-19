#include<stdio.h>
#include<stdlib.h>
float Obim_pravougaonika(float a, float b)
{
    float O;
    O=2*a+2*b;
    return O;
}
float Povrsina_pravougaonika(float a, float b)
{
    float P;
    P=a*b;
    return P;
}
void Povrsina_i_obima_pravogaonika(float a, float b, float *O, float *P)
{
    *O=2*a+2*b;
    *P=a*b;
}
void unos_stranica_pravogaonika(float *a, float *b)
{
    printf("unesi stranicu a pravougaonika\n");
    scanf("%f",a);
    printf("unesi stranicu b pravougaonika\n");
    scanf("%f",b);
}
int  main()
{
    float a,b,O,P;
    unos_stranica_pravogaonika(&a,&b);
    // printf("unesi stranicu a pravougaonika\n");
    // scanf("%f",&a);
    // printf("unesi stranicu b pravougaonika\n");
    // scanf("%f",&b);
    // O=Obim_pravougaonika(a,b);
    // P=Povrsina_pravougaonika(a,b);
    Povrsina_i_obima_pravogaonika(a,b,&O,&P);
    printf("P=%.2f\n",P);
    printf("O=%.2f\n",O);
    return 0;
}