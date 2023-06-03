//Write a C program to take two integer inputs from user and print the sum and the product of them.

#include <stdio.h>

int main()
{
    int x, y, sum =0, pro=0;
    
    printf("Enter 2 numbers x& y: \n");
    
    scanf("%d %d", &x, &y);
    
    sum = x+y; 
    pro= x*y;
    
    printf("sum= %d", sum);
    printf("\npro= %d", pro);
    
        return 0;
}