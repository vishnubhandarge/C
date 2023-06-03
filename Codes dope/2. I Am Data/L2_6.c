/*Take value of length and breath of a rectangle from the user as float. 
Find its area and print it on the screen after type casting it to int.
*/

#include <stdio.h>
int main()
{
   
   float l;
   float b;
   int area;
   
    
    
    printf("Enter l&b : \n");
    scanf("%f", &l);
    scanf("%f", &b);
    
    area= l*b;
    (int) area;
    
    
    printf("\nThe area is: %d ", area );
    
    
   
    return 0;
}
 