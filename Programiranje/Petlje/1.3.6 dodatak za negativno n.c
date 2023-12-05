int main()
{
 int n,i;
 float x,s;
 printf("Unesi broj\n");
 scanf("%f",&x);
 printf("Unesi stepen broja n\n");
 scanf("%d",&n);
 s=1;
 for(i=0;i<abs(n);i++)
 {
    s=s*x;
 }
 if(n<0)
 {
   s=1.0/s;
 }
 printf("%f",s);
    return 0;
}    