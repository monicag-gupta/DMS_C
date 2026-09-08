#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() 
{
	int x = 10;
	int y = x++;

	printf("Hello World");
	printf("\n\nPost increment :  x = %d and y= %d\n\n", x, y); 

	x = 10;
	y = ++x;

	printf("\nPre increment :  x = %d and y= %d\n\n", x, y);
}

