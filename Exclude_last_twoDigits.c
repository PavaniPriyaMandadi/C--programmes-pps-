//20 . Program to print the number excluding its last two digits (Eg I/P =  1234 O/P =12) //  
#include <stdio.h>
 
int main(void)
{
    int number, num;
 
    printf("Enter the number ");
    scanf("%d", &number);
    num = number % 100;
    printf("Last two digits of number is: %02d", num);
    return 0;
}

