
def main(): 
    s="ii"
    n=len(s)
    i=0
    v=0
    while i<n:
        if(s[i]=='i'):
            v=v+1
        elif(s[i]=='v'):
            v=v+5
        elif(s[i]=='x'):
            v=v+10
        else:
            print("not roman")
        i=i+1    
    print(v)
main()    


