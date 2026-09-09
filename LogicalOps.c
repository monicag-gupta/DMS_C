#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int x;
	int y;
	int z;
	int res;
	

	printf("Enter x:");
	scanf("%d", &x);

	printf("Enter y:");
	scanf("%d", &y);

	printf("Enter z:");
	scanf("%d", &z);


	printf("\nRelational Operators(>,<,>=,<=,==,!=):\n");

	printf("\n%d > %d is %d", x, y, (x > y));
	printf("\n%d >= %d is %d", x, y, (x >= y));
	printf("\n%d < %d is %d", x, y, (x < y));
	printf("\n%d <= %d is %d", x, y, (x <= y));
	printf("\n%d == %d is %d", x, y, (x == y));
	printf("\n%d != %d is %d", x, y, (x != y));

	printf("\nLogical Operators(&&,||,!):\n");

	res = (x > y) && (x > z);
	printf("\n(%d>%d) && (%d>%d) is %d", x, y, x, z, res);
	res = (x > y) || (x > z);
	printf("\n(%d>%d) || (%d>%d) is %d", x, y, x, z, res);
	res = !(x > y);
	printf("\n!(%d>%d) is %d", x, y, res);
}
