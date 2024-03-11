#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    printf("unesi koliko niz ima elemenata\n");
    scanf("%d",&n);
    int a[n];
    // u ovom delu koda smo uneli elemente niza tj. pomocu ove for petelje
    for(i=0;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    // ovde sada prolazimo kroz elemente niza pomocu for petlje - pretrazujemo niz i ispisujemo elemente sa parnim indeksom 
    printf("Elementi niza na parnim pozicijama:\n");
    for(i=0;i<n;i++)
    {
        if(i%2==0)
            printf(" %d ",a[i]);
    }
    printf("\nParni elementi niza:\n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf(" %d ",a[i]);
        }
    }
    return 0;
}
