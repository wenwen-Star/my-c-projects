
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	printf("%d\n", a);//整型，取值范围为-2147483648-2147483647
	long int b;
	scanf("%ld", &b);
	printf("%d\n", b);//长整型,格式控制符应为"ld"
	long long int c;
	scanf("%lld", &c);
	printf("%d\n", c);//长长整型，-2^63 - 2^63-1,长长整型格式控制符应为"lld"
	float d;
	scanf("%f", &d);
	printf( "%.2f\n ", d);//单精度浮点型
	double e;
	scanf("%lf", &e);
	printf("%.2f\n", e);//双精度浮点型
	char f;
	scanf(" %c", &f);//在（"%c,&f)中%c前面加上空格变成( "%c", &f)
	printf("%c\n", f);//字符型
	char g[100];//对于char g[]  g是数组名称  []表示这是一个数组（若初始化提供了字符串，编译器会自动确定数组长度；若未初始化，需显示器指定长度，如char g[100]
	scanf("%s", g);//char x[]="Hello"编译器会自动将数组长度设为6，包含结尾的\0
	printf("%s\n", g);
	return 0;
}