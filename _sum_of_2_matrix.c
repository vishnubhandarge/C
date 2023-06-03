/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int a[2][3], b[2][3], c[2][3], i, j;


  printf ("Enter first matrix numbers: \n ");
  for (i = 0; i < 2; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  scanf ("%d", &a[i][j]);
	}

    }

  printf ("Enter second matrix numbers: \n ");
  for (i = 0; i < 2; i++)
    {
      for (j = 0; j < 3; j++)
	    {
	        scanf ("%d", &b[i][j]);
	    }

    }

   
   printf ("The first matrix is: \n");
    for(i=0; i<2; i++)
        {
            for(j=0; j<3; j++)
                {
                    printf("\t%d", a[i][j]);
                }
             printf("\n");   
        } 
        
        
    printf ("The second matrix is: \n");
    for(i=0; i<2; i++)
        {
            for(j=0; j<3; j++)
                {
                    printf("\t%d", b[i][j]);
                }
                printf("\n");
        }  
        


    printf("\n");
    printf("\n");
    printf("\n");

  for (i = 0; i < 2; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  c[i][j] = a[i][j] + b[i][j];
      printf("\t%d", c[i][j]);
	}
        printf("\n");
    }

  return 0;
}
