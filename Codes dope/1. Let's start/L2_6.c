/*

Take two integer inputs from the user. First calculate the sum of 
two then product of two. Finally, print the sum and the product of both obtained results.
*/ 


#include <stdio.h>

int main()
{
    int x, y, sum =0, pro=0, sumpro = 0;
    
    printf("Enter 2 numbers x& y: \n");
    
    scanf("%d %d", &x, &y);
    
    sum = x+y; 
    pro= x*y;
    
    sumpro= sum*pro;
    
    printf("\npro= %d", sumpro);
    
        return 0;
}