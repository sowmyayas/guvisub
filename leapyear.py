#python code goes here
#python version :3 
def main():
    n=int(input("n"))
    if(((n%4==0)or(n%400==0))and(n%100!=0)):
        print("\nleap year")
    else:
        print("\nnot a leap year")
main()        
