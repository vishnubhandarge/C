//Take the values of length and breath of a rectangle from the user and print the area of it on the screen.
#include <stdio.h>
int main()
{
    int length;
    int breath;
    int area = 0;
    
    
    printf("Enter value of length: \n");
    scanf("%d", &length);
    
    printf("Enter value of breath: \n");
    scanf("%d", &breath);
    
    area = length*breath;
    
    printf("the area is: %d", area);
   
    return 0;
}
//output:P .
//'cause its char A and %d. 