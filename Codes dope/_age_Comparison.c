#include <stdio.h>

int main()
{
   
    int per1, per2, per3;
    
    printf("------------------Enter age of three persons----------------:\n");
    printf("Enter age of person1: \n");
    scanf("%d", &per1);
    
    printf("Enter age of person2: \n");
    scanf("%d", &per2);
    
    printf("Enter age of person3: \n");
    scanf("%d", &per3);
    
    if(per1>per2 && per1>per3)
        printf("Person 1 is older than 2&3.");
        
    else if(per2>per1 && per2>per3)
        printf("Person 2 is older than 1&3.");
    
    else if(per3>per1 && per3>per2)
        printf("Person 3 is older than 1&2. & ");
        
        
        
    
    if(per1<per2 && per1<per3)
        printf("Person 1 is younger than 2&3.");
        
    else if(per2<per1 && per2<per3)
        printf("Person 2 is younger than 1&3.");
    
    else if(per3<per1 && per3<per2)
        printf("Person 3 is younger than 1&2.");
        
    else
        printf("Invalid input!.");
        
}