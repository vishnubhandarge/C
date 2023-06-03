#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char ch = 'a';
	fp= open("abc.txt","w");
	fputc(ch,fp);
	fclose(fp);
}