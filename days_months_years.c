/* 14.Write a C program to convert a given integer (in days) to years, months and days, 
      assumes that all months have 30 days and all years have 365 days*/

#include <stdio.h>
int main(void)
{
	int days,months,years,d;
	printf("Enter number of days:");
	scanf("%d",&days);
	years = days /365;
	months = (days-(years*365))/30;
	d = (days-(years*365)-(months*30));
	printf("\n %d years ", years);
	printf("  %d months",months);
	printf("  %d days ", d);
	return 0;
}
