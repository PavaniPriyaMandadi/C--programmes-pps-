/*62.  Write a program that declares Class awarded for a given percentage of marks, where
 mark<40%= Failed , 40% to <60% =Second class, 60 % to70% = First class , >=70%= Distinction.
  Read percentage from standard input */
  
#include<stdio.h>
int main(void)
{
	int BEE,C,M1,Eng,m; // max marks per subject = 100//
	printf("Enter marks of a student\n");
	scanf("%d%d%d%d",&BEE,&C,&M1,&Eng);
	m = (((BEE+C+M1+Eng)*100)/400);
	printf("percentage of student = %d\n",m);
	if(m>=70)
	printf("class = Distinction");
	else if(m>=60)
	printf("class = Frist class");
	else if(m>=40)
	printf("class = Second class");
	else
	printf("class = Failed");
	return 0;
}


