//9.	Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour. Print the employee's ID and salary (with two decimal places) of a particular month.//
#include<stdio.h>
int main(void)
{
	long id;
	float hours,salary,wage;
	printf("Enter Employee ID\n");
	scanf("%ld",&id);
	printf("Enter total no.of hours worked\n");
	scanf("%f",&hours);
	printf("Enter wage per hour\n");
	scanf("%f",&wage);
	salary=hours*wage;
	printf("salary=%.2f",salary);
	return 0;
	
}

