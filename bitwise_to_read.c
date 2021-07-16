//33. Program to read two numbers and demonstrate all bitwise operators using them//

#include<stdio.h>
int main(void)
{
	int x , y;
	printf("Enter any 2 numbers:\n");
	scanf("%d%d",&x,&y);
	printf("x & y is %d",x&y);
	printf("\n x | y is %d",x|y);
	printf("\n x ^ y is %d",x^y);
	printf("\n The value of a after left shift  is %d",x<<1);
	printf("\n The value of a after right shift is %d",x>>2);
	printf("\n~x is %d",~x);
	return 0;
}
