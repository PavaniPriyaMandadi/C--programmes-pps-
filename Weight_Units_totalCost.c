// 8. C program that accepts an  item's weight  ,Cost and  number of units purchased  and calculate the  the total weight and total cost  of purchase//

#include <stdio.h>

int main(void)
{
  int units;
  double wt,cost,total_wt,total_cost;
  printf("number of units,weight and cost of an item are ");
  scanf("%d%lf%lf",&units,&wt,&cost);
  total_wt = units * wt;
  total_cost = units * cost;
  printf("The total cost is %lf\n",total_cost);
  printf("The total weight is %lf\n",total_wt);
  
  return 0;
}
