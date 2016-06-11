#include <stdio.h>
#include<string.h>

int main() {
	char s[100]="helloworld",res[100],resl[100];
	int n=2,i,l,j;
	for(i=0;i<=n;i++)
	{
	    res[i]=s[i];
	}
	l=strlen(s);
	j=0;
	for(i=((n+n)+1);i<l;)
	{
	    resl[j]=s[i];
	    j++;
	    i=i+n;
	}
    printf("%s%s",res,resl);
	
	return 0;
}
	
	
	
	
	
	
