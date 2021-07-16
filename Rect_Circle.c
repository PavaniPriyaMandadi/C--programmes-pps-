#include <stdio.h>
int main()
{
  int len,width,perimeter,area;
  double radius,circumference,area_of_circle;
  printf("Enter length and width of Rectangle\n");
  scanf("%d%d",&len,&width);
  
  printf("Enter the radius of the circle \n");
  scanf("%lf",&radius);
  
  perimeter = 2 * (len + width);
  area = len * width;
  circumference = 2 * 3.14 * radius;
  area_of_circle = 3.14 * radius * radius;
  
  printf("The perimeter of the given Rectangle with length %d and width %d is %d\n",len,width,perimeter);
  printf("Area of the Rectangle is %d\n",area);
  printf("The Circumference of circle with radius %lf is %lf\n",radius,circumference);
  printf("The Area of Circle is %lf",area_of_circle);
  return 0;
}

