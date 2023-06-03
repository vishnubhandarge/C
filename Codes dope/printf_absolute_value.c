#include <stdio.h>

int main()
{
   
   int num;
   
   printf("Enter a number: \n");
   scanf("%d", &num);
   
   if(num<0)
   {
       num=-1*num;
       
   }
   printf("%d", num);
}