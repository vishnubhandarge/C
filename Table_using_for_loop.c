#include <stdio.h>

int main()
{   
    int number, i;
    
    printf("Enter  a number to create table: ");
    scanf("%d", &number);
    
    
    for(i=1; i<11; i++)
        printf("\n%d", i*number);
    
        
    
            
            return 0;
}