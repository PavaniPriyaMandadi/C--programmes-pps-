//26 .Program to read basic salary,Percentage (%)of DA,% of HRA (in basic salary) and calculate Net salary//
#include<stdio.h>
int main(void)
{
	float basic,da,hra, DA,HRA,net_salary;
	printf("Enter basic salary");
    scanf("%f",&basic);
    printf("Enter Percentage (%)of DA(in basic salary):");
    scanf("%f",&da);
    printf("Enter Percentage (%) of HRA (in basic salary):");
    scanf("%f",&hra);
     
    DA = da *basic/100;
    HRA = hra *basic/100;
    net_salary = basic + DA + HRA;
    
    printf("Net salary is %f",net_salary);
}

