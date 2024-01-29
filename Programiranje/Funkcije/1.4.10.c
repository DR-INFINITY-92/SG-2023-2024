#include<stdio.h>
#include<stdlib.h>
int broj_cifara(int k)
{
    int b=0;
    while(k!=0)
    {
        b++
        k=k/10;
    }
    return b;
}
int suma_cifara(int k)
{
    int s=0;
    while(k!=0)
    {
        s=s+(k%10);
        k=k/10;
    }
    return s;
}
float aritmeticka_sredina(float x)
{
    float as;
    as=suma_cifara(x)/broj_cifara(x);
    return as;
}
int main()
{
    int n;
    float as;
    printf("unesi celi broj ciju aritmeticku sredinu cifara zelis da nadjes\n");
    scanf("%d",&n);
    as=aritmeticka_sredina(n);
    printf("aritmeticka sredina cifara broja %d je %.3f",n,as);
    return 0;
}