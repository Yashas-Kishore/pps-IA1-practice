#include<stdio.h>

typedef struct _complex
{
float real,imaginary;
}Complex;

int get_n(int n)
{
 
  printf("enter the number of complex numbers: \n");
  scanf("%d",&n);
  return n;
}





void input_n_complex(int n,Complex a[n])
{
  int i=0;
  while(i<n)
  {
    printf("Enter value of A and B  where A + iB is first complex number\n");
    scanf("%f%f", &a[i].real,&a[i].imaginary);
    i++;
  }
}



Complex add_n_complex(int n, Complex c[n])
{
  Complex d;
  d.real=0;
  d.imaginary=0;
  for(int i=0; i<n; i++)
  {
    d.real= d.real + c[i].real;
    d.imaginary=d.imaginary + c[i].imaginary;
  }
 return d;
}



void output(int n, Complex c[n], Complex result)
{
  for(int i=0; i<n-1; i++)
  {
    printf("%0.3f+%0.2fi + \n",c[i].real,c[i].imaginary);
  }
  printf("%0.3f+%0.2fi \n= %0.3f+%0.2fi ",c[n-1].real,c[n-1].imaginary,result.real,result.imaginary);
}




int main()
{
  int x;
  Complex sum;
  x=get_n(x);
  Complex p[x];
  input_n_complex(x,p);
  sum=add_n_complex(x,p);
  output(x, p, sum);
}
