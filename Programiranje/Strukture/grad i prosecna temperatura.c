#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    char ime_grada[20];
    float prosecna_temperatura;
} grad;

int broj_gradova()
{
    int n;
    printf("Unesi koliko gradova ima\n");
    scanf("%d",&n);
    return n;
}
void ucitaj_podatke_o_gradovima(int n, grad g[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("unesi ime grada\n");
        scanf("%s",&g[i].ime_grada);
        printf("unesi temperaturu za dati grad\n");
        scanf("%f",&g[i].prosecna_temperatura);
    }
}
void ispisi_podatke_o_gradovima_za_klizanje(int n, grad g[n])
{
    int i;
    printf("Gradovi sa idealnom temperaturom za klizanje su:\n");
    for(i=0;i<n;i++)
    {
        if(g[i].prosecna_temperatura>=3 && g[i].prosecna_temperatura<=8)
        {
             printf("%s t=%.2f\n",g[i].ime_grada,g[i].prosecna_temperatura);
        }
    }
}

int main ()
{
    int n;
    n=broj_gradova();
    grad g[n];
    ucitaj_podatke_o_gradovima(n,g);
    ispisi_podatke_o_gradovima_za_klizanje(n,g);
    return 0;
}
    
