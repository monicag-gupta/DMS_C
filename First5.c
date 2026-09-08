#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() 
{
	int x = 10;
	int y = 3;
	int res;
	res = x + y;
	printf("\n\nAdd: %d + %d = %d", x, y, res);
	res = x - y;
	printf("\n\nSubtract: %d - %d = %d", x, y, res);
	res = x * y;
	printf("\n\nMultiply: %d * %d = %d", x, y, res);
	res = x / y;
	printf("\n\nDivide: %d / %d = %d", x, y, res);
	res = x % y;
	printf("\n\nRemainder of Division: %d rem %d = %d", x, y, res);
	printf("\n\n");
		
}

