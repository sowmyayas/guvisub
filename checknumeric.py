
def main():
    s=input("enter input")
    n=len(s)
    i=0
    c=0
    while i<n:
        if((s[i]!='0')and(s[i]!='1')and(s[i]!='2')and(s[i]!='3')and(s[i]!='4')and(s[i]!='5')and(s[i]!='6')and(s[i]!='7')and(s[i]!='8')and(s[i]!='9')):
        	c=c+1
        	i=n
        	break
        else:
        	i=i+1
    if(c==0):
    	print("true")
    else:
    	print("false")
main()            
