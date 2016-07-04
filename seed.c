#include<stdio.h>
int main()
{
 int x,y,x1,v=1;
 printf("{enter a number");
 scanf("%d",&x);
 x1=x;
 for(;x>1;)
 {
 v=v*x%10;
 x=x/10;
 }
 v=v*x1;
 printf("seed is %d",v);
return 0;
 }
