#include <stdio.h>

int main()
{
    int a, sum=0;
    
    do{
        printf("Enter a number: ");
        scanf("%d", &a);
            
            if(a<0)
                {
                    break;
                }
        sum=sum+a;
    }while(1);
        printf("%d", sum);
        
        
    return 0;
        
}