#include <stdio.h>

int main()
{   
    int a, b, c;
    printf("Enter values of A,B &c: \n");
    
    scanf("%d%d%d", &a,&b,&c);
    
    if(a>b)
        if(a>c)
            {
                printf("A is greater than B&C%d. ", a);
            }
            
        else
        {
            printf("C is greater than A&B%d ", c);
        }
        
    else
        if(b>c)
            printf("B is greater than A&C%d  ",b);
            
        else
            printf("C is greater than A&B: %d ",c );
            
            
            return 0;
}