#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float zbir_reciprocnih(int m)
{
    int i;
    float s=0;
    for(i=1;i<=m;i++)
    {
        s=s+1.0/i;
    }
    return s;
}
int  main()
{
    float zrv;
    int n;
    p:
    printf("unesi celi broj n\n");
    scanf("%d",&n);
    if (n<0)
    {
        printf("greska prilikom unosa n mora da bude pozitivan ceo broj\n");
        goto p;
    }
    zrv=zbir_reciprocnih(n);
    printf("zbir reciprocnih vrednosti %.2f",zrv);
    return 0;
}