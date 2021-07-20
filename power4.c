#include<stdio.h>

#include<math.h>

int main()
{
  int i,n;
  long s=0;
  
  for(i=1;i<=200;i+=2)
  {
   s=s+pow(i,4);
   printf("s=%ld\n",s);
  }
  
  return 0;
}

