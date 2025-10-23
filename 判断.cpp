#include<stdio.h>
int main()
{
	int x;
	x = 1;
	printf("请输入一个数字：");
	scanf_s("%d", &x);
	if (x % 2 == 0) {
		printf("这个数字是偶数\n");
	}
	else {
		printf("这个数字是奇数\n");
	}
	printf("我判断的是否正确？\n正确请输入1\n错误请输入0\n");
	int n = 1;
	scanf_s("%d", &n);
	if (n == 1) printf("我是人工智能");
	else printf("我是人工智障");
	return 0;
}