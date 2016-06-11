#include<stdio.h>
#include<conio.h>
int main()
{
int a[100],i,n;
printf("enter array length");
scanf("%d",&n);
printf("enter the elements in sorted order");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
i=0;
while(i<n)
{
if(i==a[i])
{
printf("%d is equal to index %d",a[i],i);
break;
}
else
{
i++;
}
}
getch();
return 0;
}
