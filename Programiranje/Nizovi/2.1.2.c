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
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
            a[i]=a[i]*a[i];
    }
    // ispis elemenata niza
    for(i=0;i<n;i++)
    {
        printf(" a[%d] = %d ",i,a[i]);
    }
    return 0;
}
