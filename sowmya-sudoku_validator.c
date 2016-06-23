
#include <stdio.h>
 
void sudoku_validator(int n ,int a[])
{
    int i,j;
    int mistake_count=0;
     
      for (i = 0; i < n*n; i = i+n) {
        int sumrow = 0;
        for (j = i; j < i+n; j++) {
            sumrow = sumrow + a[j];
        }
        if (sumrow !=((n*(n+1))/2))
        {
                mistake_count++;
        }
    }
     
    for (i = 0; i < n; i++) {
        int sumcol = 0;
        for (j = i; j < n*n; j = j+n) {
            sumcol = sumcol + a[j];
        }
        if (sumcol !=((n*(n+1))/2))
        {
                mistake_count++;
        }
    }
     
    printf("Mistakes: %d\n", mistake_count);
    if(mistake_count==0)
        printf("correct answer\n");
    else
        printf("Incorrect\n");
}
 
int main(void){
    int a[100];
    int n,i;
    printf("enter number between 3 to 9");
    scanf("%d",&n);
    printf("\nenter your sudoku answer\n");
    for(i=0;i<(n*n);i++)
    {
    scanf("%d",&a[i]);
    }
    for (int i = 0; i < n*n; i = i+n) {
        for (int j = i; j < i+n; j++) {
            printf("  %d  ", a[j]);
        }
        printf("\n");
    }
 
    sudoku_validator(n,a);
 
    return 0;
}
