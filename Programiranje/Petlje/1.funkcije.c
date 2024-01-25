#include<stdio.h>
#include<stdlib.h>
void zdravo()
{
    printf("zdravo decoOo\n");
    main();

}
void obim_kruga()
{
    float Pi=3.14,Ok,r;
    printf("unesi poluiprecnik kruga\n");
    scanf("%f",&r);
  
    Ok=2*r*Pi;
    printf("obim kruga je %.2f",Ok);
}
int  main()
{
    obim_kruga();
    return 0;
}