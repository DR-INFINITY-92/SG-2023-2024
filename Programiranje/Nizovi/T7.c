#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void unos_elemenata_niza(int n, int t[n])
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf(" unesi  %d. element niza  ", i + 1);
        scanf("%d", &t[i]);
    }
}

void ispis_elemenata_niza(int n, int t[n])
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf(" %d ", t[i]);
    }
}
int broj_elemenata_niza()
{
    int n;
    printf("unesi koliko niz ima elemenata\n");
    scanf("%d", &n);
    return n;
}

void sortiranje(int n, int a[n])
{
    int i, x, j, t;
    printf("unesi prelomnu poziciju za sortiranje");
    scanf("%d", &x);
    for (i = 0; i < x - 1; i++)
        for (j = i + 1; j < x; j++)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    for (i = x; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
}
int main()
{
    int n;
p:
    n = broj_elemenata_niza();
    if (n < 1)
    {
        printf("greska prilikom unosa unesi opet\n");
        goto p;
    }
    int a[n];
    unos_elemenata_niza(n,a);
    sortiranje(n, a);
    ispis_elemenata_niza(n, a);
    return 0;
}