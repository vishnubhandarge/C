// program for 12hr digital clock
#include <stdio.h>
#include <windows.h>

int main()
{
    int h, m, s;
    int d=1000; //delay 1000 milisecond
    printf("Enter time it's 12hr clock: ");
    scanf("%d%d%d",&h,&m,&s);

    if(h>12 || m>60 || s>60)
    {
        printf("Invalid input!");
        exit(0);
    }


    while(1)
    {
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }

        if(m>59)
        {
            h++;
            m=0;
        }

        if(h>12)
        {
            h=1;
        }

        printf("Clodck:\n ");
        printf("%02d%02d%02d", h,m,s);
        sleep(d);

        system(cls); //this clears the screen
    }




    return 0;
}
