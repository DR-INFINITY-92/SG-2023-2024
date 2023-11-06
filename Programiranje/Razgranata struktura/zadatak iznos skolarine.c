#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    float p,s;
    printf("unesi 1 ako ucenik ima takmicenje a 0 ako nema\n");
    scanf("%d",&t);
    printf("unesi iznos skolranie\n");
    scanf("%f",&s);
    printf("unesi prosek ucenika\n");
    scanf("%f",&p);
    if(p>=4.5)
    {
        s=s*0.6;
    }
    else
    {
        if(t==1)
        {
            s=s*0.7;
        }
        else
        {
            if(p>=3.5 && p<4.5)
                {
                    s=s*0.8;
                }
            else
            {
                if(p>=2.5 && p<3.5)
                {
                    s=s*0.9;
                }
            }
        }
    }
    printf("trebas da platis skolranu u iznosu od %.2f\n",s);
    return 0;
}