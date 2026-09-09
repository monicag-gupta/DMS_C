#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int x;
	int y;
	int res;

	printf("Enter a number:");
	scanf("%d", &x);
	
	printf("Enter another number:");
	scanf("%d", &y);

	res = x + y;
	printf("%d + %d = %d", x, y, res);



}
