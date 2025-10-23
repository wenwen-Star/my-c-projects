#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n;
	float X=0.0;
	scanf("%d", &n);
	for (int a = 1; a <= n; a++) {
		X = X + (1.0/a);
	}
	printf("前n项和为%f", X);
	return 0;
}