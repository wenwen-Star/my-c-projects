#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	double a;
	printf("请输入你的销售额\n我将为你计算工资");
	scanf("%lf", &a);
	if (a <= 10000) {
		printf("你的工资为：1000元");
	}
	else if (a <=20000) {
			printf("你的工资为：%lf", 1000 + (a - 10000) * 0.05);
		}
	else if (a <= 50000) {
			printf("你的工资为：%lf", 1500 + (a - 20000) * 0.06);
		}
	else if (a <= 100000) {
			printf("你的工资为：%lf", 3300 + (a - 50000) * 0.07);
		}
	else {
			printf("你的工资为：%lf", 6800	 + (a - 100000) * 0.08);
		}
	printf("祝您生活愉快！");
	return 0;
}