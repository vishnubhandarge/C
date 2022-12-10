/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, sum=0;
   
    
    while(1)
    {
    printf("Enter a number: ");
    scanf("%d", &a);
    
    if(a<0)
    {
        break;
    }
    sum= sum+a;
    }
    
    printf("%d", sum);
    return 0;
}
