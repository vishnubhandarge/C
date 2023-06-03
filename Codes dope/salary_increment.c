#include <stdio.h>

int main()
{
   
    int salary, year;
    printf("Please enter your service year and salary to know bonus amount: \n");
    
    printf("Enter salary: \n");
    scanf("%d", &salary);
    
    printf("Enter service years: \n");
    scanf("%d", &year);
    
    if(year>5)
        {
            salary = salary/100*5;
            printf("Your salary incrementg is= %d", salary);
        }
        
    else
        printf("You have not worked for more than 5 years, sorry. \nno salary increment.");
        
        
    
    
}