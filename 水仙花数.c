#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a,b,c,d;
	int x=0;
	a = 100;
	if (a>= 100 && a< 1000) {
		for (a = 100; a < 1000; a++) {
			b = a / 100;
			c = a % 10;
			d = a / 10 % 10;
			x++;
			if (b * b * b + c * c * c + d * d * d == a) { printf("%d是水仙花数", a);
			if (x != 0) { printf("\n"); }
			}
		}
	}
	return 0;
}