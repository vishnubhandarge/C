#include <string.h>
#include <stdio.h>

int main()
{
    int i=0, count=0;
    char name[30];
    
    printf("Enter name: ");
    gets(name);
    puts(name);
    
    while(name[i] !='\0')
        {
            count++;
            i++;
        }
    printf("The length of string is: %d", count);
    
    
    
    return 0;
}