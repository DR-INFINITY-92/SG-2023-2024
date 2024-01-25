#include<stdio.h>
#include<stdlib.h>
int min_dva_broja(int x,int y)
{
  if(x<y)
  return x;
  else
  return y;

}
int main()
{
    int x,y,z,m;
    printf("unesi celi broj x\n");
    scanf("%d",&x);
    printf("unesi celi broj y\n");
    scanf("%d",&y);
    printf("unesi celi broj z\n");
    scanf("%d",&z);
    m=min_dva_broja(min_dva_broja(x,y),z);
    printf("najmanji broj je %d",m);
    return 0;
}