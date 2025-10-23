#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	char b;
	double a, c;
	printf("请输入一个四则运算表达式：形式如“操作数 运算符 操作数”\n我将为你输出运算结果");
	scanf("%lf%c%lf", &a, &b, &c);
	switch (b)
	{
	case '+':printf("%lf", a + c);
		break;
	case'-':printf("%lf", a - c);
		break;
	case'*':printf("%lf", a * c);
		break;
	case'/':
		if (c != 0)
			printf("%lf", a / c);
		else printf("你输入的被除数有问题\n请重新输入");//处理被除数不能为0的情况
		break;
	case'%':printf("%lf", fmod(a, c));//若要让浮点数取余，需要调用fmod函数
		break;
	default:
		printf("运算符输入错误\n");
	}return 0;
}