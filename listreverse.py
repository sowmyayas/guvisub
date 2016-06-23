l=[1,2,3,4,5]
l1=[0,0,0,0,0]
def rev():
	i=0
	j=4
	while(i<5):
		if(i==5):
			return 0;
		else :
			l1[i]=l[j]
			i=i+1
			j=j-1
rev()
print (l1)
