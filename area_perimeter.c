//write a program to write your Name, DOB & Mobile Number

#include <stdio.h>

int main()
{
    int perimeter; 
    int width = 5;
    int height = 7;
    
    perimeter = width*2 + height*2;
    printf("perimeter of the rectangle = %d\n", perimeter);
    
    int area = height*width;
    printf("area of the rectangle = %d", area);
}