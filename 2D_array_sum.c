#include <stdio.h>

int main()
{   
    int a[2][3];
    int i,j; int sum=0;
    
    
    for(i=0; i<2; i++)
        {
            for(j=0;j<3; j++)
                {
                    scanf("%d", &a[i][j]); 
                }
        }
        
        
    for(i=0; i<2; i++)
        {
            for(j=0;j<3; j++)
                {
                        printf("\t%d", a[i][j]);
                
                     sum=sum+a[i][j];
                }
                    printf("\n");
        }
        
        printf("sum=%d", sum);
        
        return 0;
}