#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a=1;
	int b, c, d;
	for (a = 100; a > 99 && a < 1000; a++) {
		b = a % 10;
		c = a / 100;
		d = a / 10 % 10;
		if (d * d * d + b * b * b + c * c * c == a) {
			printf("%d为水仙花数  ",a);
		}
	}
	return 0;
}