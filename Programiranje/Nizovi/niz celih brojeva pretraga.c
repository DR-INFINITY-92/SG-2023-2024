#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,brnula=0,brn=0,brp=0;
    printf("unesi koliko niz ima elemenata\n");
    scanf("%d",&n);
    int a[n];
    // u ovom delu koda smo uneli elemente niza tj. pomocu ove for petelje
    for(i=0;i<n;i++)
    {
        printf("a[%d] =\n",i);
        scanf("%d",&a[i]);
    }
    // ovde sada prolazimo kroz elemente niza pomocu for petlje - pretrazujemo niz 
    for(i=0;i<n;i++)
    {
        if(a[i]<0) 
            brn++;
        else
            if(a[i]>0)
                brp++;
            else
                brnula++;
    }
    // sada ovim delom koda ispisujem elemente niza tj. ispisujem niz
       for(i=0;i<n;i++)
    {
        printf("a[%d] =%d  ",i,a[i]);
    }
    printf("u unetom nizu ima %d elementa koji su manji od nule %d koji su nula i %d koji su veci od nule\n",brn,brnula,brp);
}
