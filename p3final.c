#include<stdio.h>
int input_n()
{
  int n;
  printf("enter the value\n");
  scanf("%d",&n);
  return n;
}
int sum_n(int n)
{
  int i=0,sum=0;
  for(i=1;i<=n;i++)
  {
    sum+=i;
  }
  return sum;

}
void output(int n, int sum)
{
  printf("the sum of the %d is %d",n,sum);
}
int main()
{
  int i,s;
  s=input_n();
  i=sum_n(s);
  output(s,i);
  return 0;
}
