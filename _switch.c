/******************************************************************************
NAME: VISHNU S.BHANDARGE
DATE: 12/12/2022
It's program about to use continue statement in For, while & d-while loop.
*******************************************************************************/
//continue in while loop

#include <stdio.h>

int main()
{
    int marks;
   
  
   
   
   while(marks>100)
   {
        printf("Enter marks in percentage: ");
        scanf("%d", &marks);
        
    if(marks>100)
    {
        printf("Wrong input! don't be smart.\n");
    }
       
   
   
    switch(marks/10)
    {
        
    case 9:
        
        
    case 8: 
        printf("Your grade is A. ");
        break;
      
    case 7: 
        printf("Your grade is B. ");
        break;
        
    case 6: 
        printf("Your grade is C. ");
        break;
        
    case 5: 
        printf("Your grade is D. ");
        break;
        
    case 4: 
    
    case 3: 
    
    case 2:
    
    case 1: 
        printf("You are Fail!.");
        break;
    }
        
   }
    
    return 0;
}
