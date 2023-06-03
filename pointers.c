
#include <stdio.h>

int main()
{
    int a[]={50,1,-1,10,11};
    int *p=&a[0];
    
    int *q=&a[4];
    
    int d;
    
    
    d=p-q;
    printf("%d\n",d);   //-4
    *q=25;
    printf("%d\n",*q);  //25
    d=q-p;
    printf("%d\n",d);   //4
    *p=27;
    printf("%d\n",*p);  //27
    q=q-3;
    printf("%d\n",*q);   //1
    p=p+3;
    printf("%d\n",*p);   //10
    d=p-q;
    printf("%d\n",d);   //2
                        
    
    
    
    
    
    
    
    
    return 0;
}
