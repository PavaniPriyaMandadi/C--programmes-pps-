//23.  Program to find cube of a number without using built-in function and with using built-in function//

#include<stdio.h>
int main(void)
{
	int num,cube;
	printf("Enter a number:");
	scanf("%d",&num);
	cube = num*num*num;
	printf("Cube of the given number is %d",cube);
	return 0;
}
