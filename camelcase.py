def main():
 s="sowmya devi"
 s1=s[0].upper()
 s2=s.replace(s[0],s1[0])
 n=len(s)
 c=s.count(' ')
 if(c>0):
    i=s.index(' ')
    s3=s2.replace(s[i+1],s[i+1].upper())
    print(s3)
 else:
    print(s2)
main()    
    
    

    
    
    
    
    
    
