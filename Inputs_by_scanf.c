//25 . Program to Print How Many Inputs are taken from Keyboard using Scanf.//
#include <stdio.h>
 
int main(void)
{
    int count=0;
    int num; 
    int arr[100],i=0;
     
    while(num!=-1){
        printf("Enter an integer number (-1 to exit): ");
        count+=scanf("%d",&num);
        arr[i++]=num;
    }
     
    printf("\nTotal Inputs (including 0) are: %d\n",count);
    printf("Entered numbers are:\n");
    for(i=0;i<count;i++){
        printf("%d ",arr[i]);
    }
    
     
    printf("\n");
    return 0;       
}
