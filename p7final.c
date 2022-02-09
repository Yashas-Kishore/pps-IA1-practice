#include<stdio.h>

typedef struct _complex
{
float real,imaginary;

}Complex;


Complex input_chellox()
{
  Complex x;
  printf("Enter value of A and B  where A + iB is first complex number\n");
  scanf("%f%f", &x.real,&x.imaginary);
  return x;
}

Complex add(Complex a, Complex b)
{
  Complex c;
  c.real=a.real+b.real;
  c.imaginary=a.imaginary+b.imaginary;
  return c;
}

void output(Complex a, Complex b, Complex c)
{
  printf("the sum of the given complex numbers,%0.2f+%0.2fi, %0.2f+%0.2fi is: %0.2f + %0.2fi \n",a.real,a.imaginary,b.real,b.imaginary,c.real,c.imaginary);
}

int main()
{
  Complex p,q,r;
  p=input_chellox();
  q=input_chellox();
  r=add(p,q);
  output(p,q,r);
  return 0;
}