#include <stdio.h>
int input()
{
  int x;
  printf("enter the value\n");
  scanf("%d",&x);
  return x;

}
int cmp(int a,int b,int c,int largest)
{
  if (a>b && a>c)
  {
    largest = a;
    return largest;
  }
  else if(b>a && b>c)
  {
    largest = b;
    return largest;
  }
  else
  {
     largest = c;
     return largest;
  }
}
void output(int a,int b, int c,int largest)
{
  printf("the largest number is %d", largest);
}
int main()
{
  int k,o,l,largest;
  k=input();
  o=input();
  l=input();
  largest= cmp(k,o,l,largest);
  output(k,o,l,largest);
  return 0;

}

