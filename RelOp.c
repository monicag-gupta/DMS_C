#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int x;
	int y;
	int res;
	

	printf("Enter x:");
	scanf("%d", &x);

	printf("Enter y:");
	scanf("%d", &y);

	res = x > y;

	printf("\n%d > %d is %d", x, y, (x > y));
	printf("\n%d >= %d is %d", x, y, (x >= y));
	printf("\n%d < %d is %d", x, y, (x < y));
	printf("\n%d <= %d is %d", x, y, (x <= y));
	printf("\n%d == %d is %d", x, y, (x == y));
	printf("\n%d != %d is %d", x, y, (x != y));

	
}
