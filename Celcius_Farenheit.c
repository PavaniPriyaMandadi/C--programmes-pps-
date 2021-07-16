//12.Write a C program to convert temperature from foreinheit to celcius.//
#include<stdio.h>  
 int main()   
 {
     float Fahrenheit, Celsius;  
     scanf("%f",&Fahrenheit);
     Celsius = ((Fahrenheit-32)*5)/9;  
     printf("Temperature in Celsius is : %f",Celsius);  
     return 0;  
    }
    
