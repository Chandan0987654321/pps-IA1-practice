#include<stdio.h>

typedef struct _complex
{
  float real,imaginary;
}Complex;

Complex input_complex(Complex *a,Complex *b)
{
 printf("enter a complex number:\n");
 scanf("%f%f",&a->real,&a->imaginary);
 scanf("%f%f",&b->real,&b->imaginary);
}
Complex add(Complex a,Complex b)
{
  Complex sum;
  {
  sum.real=a.real+b.real;
  sum.imaginary=a.imaginary+b.imaginary;
  }
  return sum;
}
void output(Complex a,Complex b,Complex sum)
{
  printf("the sum of (%f+%fi) and (%f+%fi) is (%f+%fi)\n",a.real,a.imaginary,b.real,b.imaginary,sum.real,sum.imaginary);
}
int main()
{
  Complex a,b,sum;
  input_complex(&a,&b);
  sum=add(a,b);
  output(a,b,sum);
  return 0;
}