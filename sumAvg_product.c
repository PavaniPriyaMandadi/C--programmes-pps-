//3.7.	Write a C program that accepts 3 integers from the user and calculate the sum  ,Product  average of these  3 integers//

#include<stdio.h>
int main(void)
{
 
  int num1, num2, num3,sum,product;
  double avg;

    printf("Enter three Numbers: ");
  scanf("%d %d %d",&num1, &num2, &num3);

  
  sum = num1 + num2 + num3;

 
  avg = sum / 3;
  
  
  product = num1 * num2 * num3;

 
  printf("Entered numbers are: %d, %d and %d\n",num1, num2, num3);
  
  
  
  
  
  

 
  printf("Sum=%d\n", sum);
  printf("Average=%.2f\n",avg );
  printf("Product = %d",product);

  return 0;
}
