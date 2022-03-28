#include <stdio.h>
int input_n()
{
  int x;
  printf("enter the value\n");
  scanf("%d",&x);
  return 0;
  
}
int sum_n(int n)
{
  int i,sum=0;
  i=1;
  for(i=1;i<=n;i++)
  {
    sum+=i;
  }
  return sum;
}
void output(int n,int sum)
{
  printf("sum of %d numbers is %d",n,sum);
}
int main()
{
  int s,i;
  s=input_n();
  i= sum_n(s);
  output(s,i);
  return 0;
}



