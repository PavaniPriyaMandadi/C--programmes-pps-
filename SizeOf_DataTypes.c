#include <stdio.h>

int main()
{
  printf("int is %d bytes \n",sizeof(short int));
  printf("double is %lf bytes \n",sizeof(double));
  printf("float is %d bytes \n",sizeof(float));
  printf("long int  is %d bytes \n",sizeof(long int));
  printf("long double is %d bytes \n",sizeof(long double));
  printf("char is %d bytes \n",sizeof(char));
  
  return 0;
}
