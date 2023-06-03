#include <stdio.h>

int main()
{
   
    int marks;
    
    printf("___________Enter marks in percentage_______________:\n");
    scanf("%d", &marks);
    
    if(marks>80)
        printf("Your grade is 'A.' ");
      
    else if(marks>60) 
        printf("Your grade is 'B'. ");
        
    else if(marks>50)
        printf("Your grade is 'C'. ");
        
    else if(45>50)
        printf("Your grade is 'D'. ");
    
    else if(marks>25)
        printf("Your grade is 'E'. ");
        
    else if
        printf("You are fail!.");
        
    else
        printf("Enter valid marks.");
    
}