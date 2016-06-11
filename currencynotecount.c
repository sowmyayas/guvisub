
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 int amt,count=0,ct=0,ch=0,cfh=0,cfy=0,cten=0,cone=0;
 char s[100];
 scanf("%d",&amt);
 while(amt>=10)
 {
 if(amt>=1000)
 {
  ct=amt/1000;
  amt=amt%1000;
  }
  else if(amt>=500)
  {
  cfh=amt/500;
  amt=amt%500;
  }
  else if(amt>=100)
  {
  ch=amt/100;
  amt=amt%100;
  }
  else if(amt>=50)
  {
  cfy=amt/50;
  amt=amt%50;
  }
  else if(amt>=10)
  {
  cten=amt/10;
  amt=amt%10;
  }
  }
  if(amt>0)
  {
  cone=amt%10;
  }

  count=ct+cfh+ch+cten+cfy+cone;
  printf("\n%d\n",count);
  getch();
  return 0;
  }


