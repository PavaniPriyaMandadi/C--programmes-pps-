/* 6.Write a C program to convert specified days into years, weeks and days.  
      Note: Ignore leap year.  */

#include <stdio.h>
int main(void)
{
	int days,weeks,years,d;
	printf("Enter number of days:");
	scanf("%d",&days);
	years = days /365;
	weeks = (days-(years*365))/7;
	d = (days-(years*365)-(weeks*7));
	printf("\n %d years ", years);
	printf("  %d weeks",weeks);
	printf("  %d days ", d);
	return 0;
}

