#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	printf("Input four positive integers (a b c x): ");
	int a, b, c, x;
	scanf("%d %d %d %d", &a, &b, &c, &x);
	printf("%dx^2 + %dx + %d = %d", a, b, c, a * x * x + b * x + c);
	system("pause");
	return 0;
}