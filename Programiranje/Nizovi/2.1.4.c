#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,k;
    printf("unesi koliko niz ima elemenata\n");
    scanf("%d",&n);
    printf("unesi celi broj k\n");
    scanf("%d",&k);
    int a[n];
    // u ovom delu koda smo uneli elemente niza tj. pomocu ove for petelje
    for(i=0;i<n;i++)
    {
        printf(" a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    // ovde sada prolazimo kroz elemente niza pomocu for petlje - pretrazujemo niz i ispisujemo elemente sa parnim indeksom 
    printf("indeksi elemenata  niza deljivih sa %d:\n",k);
    for(i=0;i<n;i++)
    {
        if(a[i]%k==0)
            printf(" %d ",i);
    }
    return 0;
}
