l=[1,2,3,4,5]
l1=[0,0,0,0,0]
n=len(l)
def rev():
	i=0
	j=n-1
	while(i<n):
		if(i==n):
			return 0;
		else :
			l1[i]=l[j]
			i=i+1
			j=j-1
rev()
print (l1)
