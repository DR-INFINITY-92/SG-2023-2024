int main()
{
 int n,i,m;
 float x,s;
 printf("Unesi broj\n");
 scanf("%f",&x);
 printf("Unesi stepen broja n\n");
 scanf("%d",&n);
 s=1;
 m=abs(n);
 for(i=0;i<m;i++)
 {
    s=s*x;
 }
 if(n<0)
 {
   s=1.0/s;
 }
 printf("%.3f",s);
    return 0;
}    