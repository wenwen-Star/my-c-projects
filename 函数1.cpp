#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int year(int a)
{
	if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)//�ж�����
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
		printf("%d��%d����31��\n",a,b);
		break;
	case 4:
	case 6:
	case 9:
		printf("%d��%d����30��\n",a,b);
		break;
	case 2:
		if (year(a)) {
			printf("%d��%d����29��\n", a, b);
		}
		else {
			printf("%d��%d����28��\n",a,b);
		}
		break;
	default:
		printf("������·���Ч\n");
		break;
	}
}

int main()
{
	int a,b ;
	printf("�������������£�");
	scanf("%d %d", &a, &b);
	month(a, b);
	return 0;
}
