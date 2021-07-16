//27 . Program to find sum of n integers Eg: sum of 10 integers=1+2+3+4+…….10=55//
#include<stdio.h>
int main(void)
{
	int n,sum;
	printf("find sum of  first n integers\n");
	scanf("%d",&n);
	sum = (n*(n+1))/2;
	printf("sum of first %d integers = %d",n,sum);
	return 0;
}

