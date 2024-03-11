#include <stdio.h>
#include <stdlib.h>)
int par_nepar(int n)
{
	    
	int c;
    int pp=n%2==0;
	 
    while (n!=0) 
    {
	
        c=n%10;
        if ((c%2==0 && pp) || (c%2!=0 && !pp)) 
        {
		
            pp=!pp;
        } 
		else 
        {
		
            return 0; 
        }
        n=n/10;
    }

    return 1; 
}

int main() 
{

    int n;

    printf("Unesi ceo broj n\n");
    scanf("%d",&n);

    if (par_nepar(n)==1) 
    {
	
        printf("ispunjava uslov\n");
    }
	if (par_nepar(n)==0)
    {
	
        printf("ne ispunjava uslov\n");
    }

    return 0;
}
