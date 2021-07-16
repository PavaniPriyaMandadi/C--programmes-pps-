#include <stdio.h>

int main()
{
  
  char color;
  scanf("%c",&color);
  
  switch (color)
  {
  case 'r': 
      printf("Red");
      break;
  case 'y':
      printf("Yellow");
      break;
  case 'b':
      printf("Blue");
      break;
 
  default:
      printf("The Entered charecter is not having respective color");
  }
  
  return 0;
}

