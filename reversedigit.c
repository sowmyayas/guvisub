#include<stdio.h>
#include<conio.h>
int main()
{
 int a=123,i=0,r[10];
 while(a>0)
 {
   r[i]=a%10;
   a=a/10;
   i++;
   count++;
 }
 for(i=0;i<count;i++)
 {
 printf("%d",r[i]);
 }
 getch();
 return 0;
 }
