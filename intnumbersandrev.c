#include <stdio.h>

int main()
{
  int i,arr[10];
  for(i=0;i<10;i++)
  {
   printf("Enter the number %d:\n",i);
   scanf("%d",&arr[i]);
  }
  for(i=9;i>=0;i--)
  {
   printf("Number %d:%d\n",i,arr[i]);
  }
  
  return 0;
}

