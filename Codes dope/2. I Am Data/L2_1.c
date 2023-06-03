//Write a C program to take an int, a float and a char input from user and print them on the screen.
#include <stdio.h>
int main()
{
    int a;
    float b;
    char ch;
    
    printf("Enter char, float & int values: \n");
    scanf("%c", &ch);
    scanf("%d", &a);
    scanf("%f", &b);
    
    printf("the int value is: %d", a);
    printf("\nthe float value is: %f", b);
    printf("\nthe char value is: %c\n", ch);
    
    return 0;
}
//output:P .
//'cause its char A and %d. 