#include <stdio.h>

int main()
{
 int num, rem,sum=0,temp;
 printf("Enter Number:\n");
 scanf("%d",&num);
 temp = num;
 while(num > 0)
 {
  rem = num % 10;
  sum = sum +(rem * rem * rem);
  num /= 10;
 } 
  if (sum == temp)
  {
   printf("Armstrong Number");
  }
  else
  {
   printf("Not an Armstrong Number");
  }
   return 0;
}

