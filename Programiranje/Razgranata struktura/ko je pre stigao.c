#include <stdio.h>
#include <stdlib.h>
int main()
{
    int hp, mp, sp, hm, mm, ms, usp, usm;
    printf("unesi sate kada je stigao pera\n");
    scanf("%d", &hp);
    printf("unesi minute kada je stigao pera\n");
    scanf("%d", &mp);
    printf("unesi sekunde kada je stigao pera\n");
    scanf("%d", &sp);
    printf("unesi sate kada je stigao Mika\n");
    scanf("%d", &hm);
    printf("unesi minute kada je stigao Mika\n");
    scanf("%d", &mm);
    printf("unesi sekunde kada je stigao Mika\n");
    scanf("%d", &ms);
    usp = hp * 3600 + mp * 60 + sp;
    usm = hm * 3600 + mm * 60 + ms;
    if (usp == usm)
    {
        printf("oboje su stigli u isto vreme\n");
    }
    else
    {
        if (usp < usm)
        {
            printf("pera je pre stigao od mike\n");
        }
        else
        {
            printf("mika je pre stigao od pere\n");
        }
    }

    return 0;
}
