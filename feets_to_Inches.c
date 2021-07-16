//24.  Program to convert feets to inches//

#include<stdio.h>
int main(void)
{
	int feet,inches;
	printf("Enter the value in feets:");
	scanf("%d",&feet);
	inches = feet *12;
	printf("Total inches will be %d",inches);
	return 0;
}

