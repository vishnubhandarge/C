
#include <stdio.h>
#include <conio.h>

int main()
{
    int a[3][3], sc, sr, i, j;
    
    printf("Enter matrix numbers: \n ");
    
    for(i=0; i<3; i++)
      {
        for(j=0; j<3; j++)
            {
                scanf("%d\t", &a[i][j]);
            }
        printf("\n");
      }
      
      
    printf("The matrix is: \n");
     for(i=0; i<3; i++)
      {
        for(j=0; j<3; j++)
            {
                printf("%d\t", a[i][j]);
            }
        printf("\n");
      }
      
      
    for(i=0; i<3; i++)
        {
            sr=sc=0;
            for(j=0; j<3; j++)
                {
                    sr= sr+a[i][j];
                    sc= sc+a[j][i];
                }
              printf("\nsr= %d, sc= %d", sr, sc);
        }    
    
    
    
    return 0;
}
