/*10.Write a C program to calculate a bike's average consumption from the given total distance
 (integer value) travelled (in km)and spent fuel (in liters, float number - 2 decimal point)*/
 
 #include<stdio.h>
 int main(void)
 {
 	int dist;
 	float fuel_spent, avg_consumption;
 	printf("Enter total distance in km: ");
	scanf("%d",&dist);
	printf("Enter total fuel spent in liters: ");
	scanf("%f", &fuel_spent);
	avg_consumption = dist/fuel_spent;
	printf("Average consumption is %.2f ",avg_consumption);
	return 0;
 }
