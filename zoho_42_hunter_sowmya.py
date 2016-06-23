#include <stdio.h>
#include<malloc.h>

int main()
{
	char **a;
	int r,c,i,j;
	scanf("%d%d",&r,&c);
	a=(char**)malloc(r*sizeof(char*));
	for(i=0;i<r;i++)
	{
		*(a+i)=(char*)malloc(c*sizeof(char));
	}
	for(i=0;i<r;i++)
	{
		for(j=1;j<=c+1;j++)
		{
			scanf("%c",(*(a+i)+j));// input as welcome to zoho corporation
		}
	}
	
  	for(i=0;i<r;i++)
	{
		for(j=1;j<=c+1;j++)
		{
			printf("%c",*(*(a+i)+j));
		}
		printf("\n");
	}
	char s[3]="too";
	for(i=0;i<r;i++)
	{
		if((a[i]=='t')&&(a[i+1]=='o')&&(a[i+2]=='o'))
		{
		 printf("\nrow yes");	
		 printf("%d%d",i,i+2);
		}
		else
		    i++;
	}
	for(i=0;i<c;i++)
	{
		if((a[i]=='t')&&(a[i+1]=='o')&&(a[i+2]=='o'))
		{
		 printf("\ncol yes");	
		 printf("%d%d",i,i+2);
		}
		else
		    i++;
	}
	
	return 0;
}
