#include<stdio.h>
#include<math.h>

int main() 
{
    int g;
    printf("unesi godinu za koju zelis da proveris da li je prestupna\n");
    scanf("%d", &g);
    if ((g % 4 == 0 && g % 100 != 0) || (g % 400 == 0))
    {
        printf("godina je prestupna\n");
    }
    else
    {
        printf("godina nije prestupna\n");
    }
    return 0;
}