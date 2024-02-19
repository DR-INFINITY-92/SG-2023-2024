#include<stdio.h>
#include<stdlib.h>
float redna_veza(float R1, float R2)
{
    return R1+R2;
}
float paralelna_veza(float R1, float R2)
{
    return R1*R2/(R1+R2);
}
float ekvivalentna_otpornost(float R1, float R2)
{
    float Re;
    char c;
    p:
    printf("unesi R ako zelis da racunas rednu vezu, a P za paralelnu\n");
    scanf(" %c",&c);
    if(c=='R')
        Re=redna_veza(R1,R2);
    else    
        if(c=='P')
            Re=paralelna_veza(R1,R2);
        else
            {
                printf("pogresan unos unesi opet\n");
                goto p;
            }
    return Re;
}
int  main()
{
    float R1,R2,Re;
    printf("unesi otpornost prvog otpornika\n");
    scanf("%f",&R1);
     printf("unesi otpornost drugog otpornika\n");
    scanf("%f",&R2);
    Re=ekvivalentna_otpornost(R1,R2);
    printf("Re=%.2f oma\n",Re);
    return 0;
}