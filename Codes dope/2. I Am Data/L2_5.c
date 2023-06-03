//Write a C program to take two integer inputs from the user and print the sum and the product of them.
#include <stdio.h>
int main()
{
   
   int a=0;
   int b= 0;
   int sum=0;
   int product=0;
   
    
    
    printf("Enter two int value : \n");
    scanf("%d", &a);
    scanf("%d", &b);
    
    sum = a+b;
    product = a*b;
    printf("The sum is: %d", sum );
    printf("\nThe product is: %d ", product );
    
    
   
    return 0;
}
 