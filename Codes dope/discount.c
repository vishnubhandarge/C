#include <stdio.h>

int main()
{
   
    int quantity; 
    printf("Please type here quantity you purchased:\n");
    scanf("%d", &quantity);
    
    int cost = quantity*100;
    
    int discount = cost/10;
    
    if(cost>=1000)
        printf("you have discount of %d", discount);
    
    else
        printf("You have not purchased more than $1000,\n hence, no Discount sorry.");
}