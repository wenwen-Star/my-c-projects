#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c, n,d;
	d = 1;
	printf("������һ�����֣��ҽ�Ϊ��������Ľ׳˺�");
	scanf("%d", &c);
	b = 1;
	for (a = 1; a <= c; a++) {
		for (n = 1; n <= a; n ++) {
			b = b * n;
		}
		d = d + a;
	}
	printf("%d",d);
	return 0;
}