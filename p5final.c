#include<stdio.h>

float input()
{
  float g;
  printf("enter the number for sqrt \n");
  scanf("%f",&g);
  return g;

}

float my_sqrt(float n)
{
  float z;
  double sqrt =0,i,x;
  i=n/2;
  while (i<n){
    x=(i + n/i)/2;
    z=x;
    if(z==i){
      sqrt=z;
      return sqrt;
    }
    else
    i=z;
    
  }
  return sqrt;
}

void output(float n,float sqrt_result)
{
  printf("the sqrt of the given number %.3f is %.3lf",n,sqrt_result);
}

int main()
{
  float p,q;
  p=input();
  q=my_sqrt(p);
  output(p,q);
  return 0;
}