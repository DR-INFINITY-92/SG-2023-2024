#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    printf("unesi koliko imate radni u firmi bajo\n");
    scanf("%d",&n);

    float plata_radnik[n],sati_radnik[n], cena_rada_po_satu;
    printf("unesi cenu rada po sati\n");
    scanf("%f",&cena_rada_po_satu);

    // plata_radnik[0] =sati_radnik[0]*cena_rada_po_satu;
    //  plata_radnik[1] =sati_radnik[1]*cena_rada_po_satu;
    //   plata_radnik[2] =sati_radnik[2]*cena_rada_po_satu;
    //    plata_radnik[3] =sati_radnik[3]*cena_rada_po_satu;
    for(i=0;i<n;i++)
    {
        printf("unesi koliko sati je radio %d. radnik \n",i+1);
        scanf("%f",&sati_radnik[i]);
        plata_radnik[i]=sati_radnik[i]*cena_rada_po_satu;
    }
    for(i=0;i<n;i++)
        printf("%d radnik ima platu %.2f\n",i+1,plata_radnik[i]);
    
}
