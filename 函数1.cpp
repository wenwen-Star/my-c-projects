#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int year(int a)
{
	if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)//判断闰年
	{
		return 1;
	}
	return 0;
}
	void month(int a,int b){
	switch (b)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("%d年%d月是31天\n",a,b);
		break;
	case 4:
	case 6:
	case 9:
		printf("%d年%d月是30天\n",a,b);
		break;
	case 2:
		if (year(a)) {
			printf("%d年%d月是29天\n", a, b);
		}
		else {
			printf("%d年%d月是28天\n",a,b);
		}
		break;
	default:
		printf("输入的月份无效\n");
		break;
	}
}

int main()
{
	int a,b ;
	printf("请依次输入年月：");
	scanf("%d %d", &a, &b);
	month(a, b);
	return 0;
}
