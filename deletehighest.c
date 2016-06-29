#include <stdio.h>

int main(void)
{
	int n,a[10],count=0;
	int max,i,j,k;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;n!=0;)
	{
		a[i]=n%10;
		n=n/10;
		i++;
		++count;
	}
	for(i=0;i<count;++i)
	{
		for(j=i+1;j<count;++j)
		{
		  if(a[j]>a[i])
		  { 
		  	max=a[j];
			a[j]=a[i];
			a[i]=max;
		  }
		}
		
	}
	for(i=count-1;i>=k;i--)
	{
	printf("%d",a[i]);
	}
	return 0;
}
