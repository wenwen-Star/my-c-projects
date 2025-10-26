#define _CRT_SECURE_NO_WARNINGA
#include<stdio.h>
int main()
{
	int a,b,x;
	a = 1;
	while (a < 10) {
		b = 1;
		while (b <= a) {
			x = a * b;
			printf("%d*%d=%d", a, b, x);
			if (x >= 1)printf("  ");
			b++;
		}
		printf("\n");
		a++;
	}
	return 0;
}