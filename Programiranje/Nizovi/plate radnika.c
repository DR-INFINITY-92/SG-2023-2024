#include<stdio.h>
#include<stdlib.h>
int main()
{
    float magdalena_plata,sana_plata,jana_plata,jelena_plata,magdalena_sati,sana_sati,jelena_sati,jana_sati,cena_rada_po_satu;
    printf("unesi koliko iznosi cena rada po satu\n");
    scanf("%f",&cena_rada_po_satu);
    printf("unesi koliko sati je radila sana\n");
    scanf("%f",&sana_sati);

    printf("unesi koliko sati je radila magdalena \n");
    scanf("%f",&magdalena_sati);

     printf("unesi koliko sati je radila jana \n");
    scanf("%f",&jana_sati);

     printf("unesi koliko sati je radila jelena \n");
    scanf("%f",&jelena_sati);

    magdalena_plata=magdalena_sati*cena_rada_po_satu;
    sana_plata=sana_sati*cena_rada_po_satu;
    jana_plata=jana_sati*cena_rada_po_satu;
    jelena_plata=jelena_sati*cena_rada_po_satu;
    
    printf("plata magdealene je %f",magdalena_plata);
        printf("plata sane je %f",sana_plata);

    printf("plata jane je %f",jana_plata);

    printf("plata jelene je %f",jelena_plata);

    
    

}
