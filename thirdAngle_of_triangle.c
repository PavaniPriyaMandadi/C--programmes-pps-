//29.Program to input two angles from user and find third angle of the triangle//

#include<stdio.h>
int main(void)
{
	int a,b,c;
	printf("enter any two angles of a triangle\n");
	scanf("%d%d",&a,&b);
	c = 180-(a+b);
	printf("third angle = %d",c);
	return 0;
}

