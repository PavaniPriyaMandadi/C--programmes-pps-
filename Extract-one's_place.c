//* 19.Program to extract the digit in one?s place of an integer Eg I/p=123 O/P=3*//

#include<stdio.h>
int main(void)
{
	int num,ones_digit;
	printf("Enter an Integer:");
	scanf("%d",&num);
	ones_digit = num % 10;
	printf("one's place of the given integer is %d",ones_digit);
	return 0;
}

