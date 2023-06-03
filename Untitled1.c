#include <stdio.h>

int main(){
    int i;
    float f;
    char ch;

    scanf("%d", &i);
    scanf("%f", &f);
    scanf(" %c", &ch);
    

    printf("output is: %d\n", &i);
    printf("output is: %f\n", &f);
    // printf("output is: %c", &ch);
    printf("character : %c\n", ch);
}

/*
#include <stdio.h>
main(){
	int i;
	float fl;
	char ch;
	scanf("%d", &i);         //taking integer input
	scanf("%f", &fl);        //taking float input
	        //taking character input
	printf("integer : %d\n", i);
	printf("float : %f\n", fl);
	
}
*/
