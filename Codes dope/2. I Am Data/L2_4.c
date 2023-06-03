//Take a float input from the user and type cast it to int and print it on the screen.
#include <stdio.h>
int main()
{
   
   float ch=0;
    
    
    printf("Enter value of float: \n");
    scanf("%f", &ch);
    
    int i = (int) ch;
    
    printf("The int value of float: \n %d",i);
    
   
    return 0;
}
 