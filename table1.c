#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int x;
	int i;
	int res;

	printf("Enter a number:");
	scanf("%d", &x);

	i = 0;

	printf("%d * %d = %d\n", x, ++i, (x * i));
	printf("%d * %d = %d\n", x, ++i, (x * i));
	printf("%d * %d = %d\n", x, ++i, (x * i));
	printf("%d * %d = %d\n", x, ++i, (x * i));
	printf("%d * %d = %d\n", x, ++i, (x * i));
	printf("%d * %d = %d\n", x, ++i, (x * i));
	printf("%d * %d = %d\n", x, ++i, (x * i));
	printf("%d * %d = %d\n", x, ++i, (x * i));
	printf("%d * %d = %d\n", x, ++i, (x * i));
	printf("%d * %d = %d\n", x, ++i, (x * i));
}
