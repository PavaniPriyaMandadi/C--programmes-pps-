#include <stdio.h>

int main()
{
 int cust_ID,consumed;
 float chg,surchg=0,gross_amt,net_amt;
 char con_name[20];
 printf("Input Customer ID :");
   scanf("%d",&cust_ID);
   printf("Input the name of the customer :");
   scanf("%s",con_name); 
   printf("Input the unit consumed by the customer : ");
   scanf("%d",&consumed);
   if (consumed <200 )
   {
	chg = 1.20;
	}
   else	if (consumed>=200 && consumed<400)
   {
		chg = 1.50;
		}
	else if (consumed>=400 && consumed<600)
	{
			chg = 1.80;
			}
		else
		{
			chg = 2.00;
			}
   gross_amt = 100+(consumed*chg);
   if (gross_amt>400)
   {
	surchg = gross_amt*15/100.0;
	
   net_amt = gross_amt+surchg;
   }
   
	
	
   
  printf("\nElectricity Bill\n");
   printf("Customer IDNO                       :%d\n",cust_ID);
   printf("Customer Name                       :%s\n",con_name);
   printf("unit Consumed                       :%d\n",consumed);
   printf("Amount Charges @Rs. %4.2f  per unit :%8.2f\n",chg,gross_amt);
   printf("Surchage Amount                     :%8.2f\n",surchg);
   printf("Net Amount Paid By the Customer     :%8.2f\n",net_amt);
  
  
  
  return 0;
}

