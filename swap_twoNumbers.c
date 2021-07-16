//22.  Program to swap two numbers without using temperory variable.//
#include <stdio.h>
int main()
{
  int num1, num2;
  printf("Enter two numbers");
  scanf("%d%d",&num1,&num2);
  
  num1 = num1+num2;
  num2 = num1-num2;
  num1 = num1-num2;
  
  printf("First number :%d\n",num1);
  printf("Second number :%d\n",num2);
  
  return 0;
}

