/*5.Write a C program to read and print the values of variables of different data types
(int, short int,long int,long long int(decimal,octal,hexadecimal),char,float,double ,
long double)*/

#include<stdio.h>
int main(void)
{
	int num1;
	short int num2;
	long int num3;
	long long int num4;
	char ch;
	float num5;
	double num6;
	long double num7;
	printf("Enter num1,num2,num3,num4,ch,num5,num6,num7\n");
	scanf("%d",&num1);
    scanf("%hi",&num2);
    scanf("%ld",&num3);
    scanf("%lli",&num4);
    scanf("\n%c",&ch);
    scanf("%f",&num5);
    scanf("%ld",&num6);
    scanf("%lf",&num7);
    printf("num 1=%d,num2 =%hi,num3 =%ld, num4 =%lli, ch = %c,num5 =%f , num6 =%ld , num7 =%lf",num1,num2,num3,num4,ch,num5,num6,num7);
}

