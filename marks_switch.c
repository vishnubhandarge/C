#include <stdio.h>

int main()
{   
    int marks;
    printf("Enter the percentage of 10th standard: \n");
    
    scanf("%d", &marks);
    
    switch(marks/10)
    {
    
    case 9: 
    
    case 8: printf("Your grade is: A");
    
    break;
    
    case 7: printf("Your grade is: B");
    break;
    
    case 6: printf("Your grade is: C");
    break;
    
    case 5: printf("Your grade is: D");
    break;
    
    default: printf("You are fail!");
    
    }
    
            
            return 0;
}