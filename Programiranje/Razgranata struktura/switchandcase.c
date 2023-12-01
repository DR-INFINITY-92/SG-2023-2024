#include <stdio.h>
#include <stdlib.h>

int main()
{
   int brojdana;
   p:
   printf("unesi redni broj dana u nedelji\n");
   scanf("%d",&brojdana);
    switch (brojdana)
    {
        case 1:
            printf("ponedeljak");
        break;
        case 2:
            printf("utorak");
        break;
        case 3:
            printf("sreda");
        break;
        case 4:
            printf("cetvrtak");
        break;
        case 5:
            printf("petak");
        break;
        case 6:
            printf("subota");
        break;
        case 7:
            printf("nedelja");
        break;
        default:
            printf("neispravan unos, pokusajte ponovo\n");
            goto p;     
    }
    printf("lalalalalal\n");
    
    
   
    return 0;
}

