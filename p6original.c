#include <stdio.h>

void input_two_string(char *a,char *b)
{
  printf("enter the 1st string to cmp: \n ");
  scanf("%s",a);
  printf("enter the next string to cmp: \n");
  scanf("%s",b);

}

int str_cmp(char *a,char *b,int *result)


{
  int i=0;
  while(a[i]!='\0' && b[i]!='\0'&& a[i]==b[i])
  {
  
    i++;
  }

*result=a[i]-b[i]; 

}

void output(char *a,char *b,int result)



{
  if (result>0)
  {
    printf("the string %s is greater than %s\n",a,b);
  }
  else if (result<0)
  {
    printf("the string %s is greater than %s\n",b,a);
  }
  else
  {
    printf("the strings are equal\n");
  }
}

int main()
{
  char a[20],b[20];
  int result;
  input_two_string(a,b);
  str_cmp(a,b,&result);
  output(a,b,result);
  return 0;
}
