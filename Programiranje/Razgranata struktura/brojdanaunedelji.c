#include <stdio.h>
#include <stdlib.h>

int main()
{
   int brojdana;
   p:
   printf("unesi redni broj dana u nedelji\n");
   scanf("%d",&brojdana);
   if(brojdana <1 || brojdana >7)
    {
        printf("pogresan unos ne postoji dan sa tim rednim brojem u nedelji\n");
        goto p;
    }
    else
    {
        if (brojdana == 1)
            printf("ponedeljak");
        else
            if(brojdana == 2)
                printf("utorak");
            else
                if(brojdana == 3)
                     printf("sreda");
                 else
                    if(brojdana == 4)
                        printf("cetvrtak");
                    else
                        if(brojdana == 5)
                            printf("petak");
                        else
                            if(brojdana == 6)
                                 printf("subota");
                            else
                                if(brojdana == 7)
                                    printf("nedelja");
    }
   
    return 0;
}

