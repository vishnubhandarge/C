//program to create simple calculator using switch 

#include <stdio.h>
#include <conio.h>

void main()
{
    int number;
    
    printf("\n1 for 80 to 100 \n2 for 70 to 79.\n3 for 60 to 69.\n4 fot 50 to 59.\nless than 49 failed.\nEnter the number as your %: ");
    
    scanf("%d", &number);
    
    switch(number)
    {
        case 1: number >80 && number<100;
            printf("Your grade is: A, Passed!");
            break;
        
        case 2: 
            printf("Your grade is: B, Passed!");
            break;
            
        case 3: 
            printf("Your grade is: C, Passed!");
            break;
        
        case 4: 
            printf("Your grade is: D, Passed!");
            break;
            
        default: 
            printf("Your grade is: <49, Failed");
            
    }
    
}