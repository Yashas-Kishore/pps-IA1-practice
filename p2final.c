#include <stdio.h>

int input()
{
  int x;
  printf("enter the numbers\n");
  scanf("%d", &x);
  return x;

}

int cmp(int a,int b,int c)
{
  if(a>b && a>c)
  {
    return a;
  
  }
  else if( b>c)
  {
    return b;
  }
  else{
    return c;
  }
}

int main()
{
  int p,q,r,s;
  p=input();
  q=input();
  r=input();
  s=cmp(p,q,r);
  printf("%d \n",s);
   return 0;

  
}