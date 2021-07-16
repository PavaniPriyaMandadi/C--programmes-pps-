#include <stdio.h>

int main()
{
  int Princi;
  float Rate,Time,SI;   //time and rate can be in decimals so float
  Princi= 20500;
  Time = 3.5;
  Rate = 2.5;
  SI = Princi * Time * Rate /100.0;
  printf("Simple Interest is:%f",SI);
  
  return 0;
}
