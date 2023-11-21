#include<stdio.h>
#include<stdlib.h>
int main()
{
    char znak;
    printf("unesi samoglasnik\n");
    scanf(" %c",&znak);
    if(znak=='a' || znak=='e'|| znak=='i'|| znak=='o'|| znak=='u')
        printf("uneti znak je samoglasnik\n");
    else    
        printf("uneli ste znak koji nije samoglasnik\n");
    return 0;
}