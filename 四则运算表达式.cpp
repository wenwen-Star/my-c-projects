#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	char b;
	double a, c;
	printf("������һ������������ʽ����ʽ�硰������ ����� ��������\n�ҽ�Ϊ�����������");
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
		else printf("������ı�����������\n����������");//������������Ϊ0�����
		break;
	case'%':printf("%lf", fmod(a, c));//��Ҫ�ø�����ȡ�࣬��Ҫ����fmod����
		break;
	default:
		printf("������������\n");
	}return 0;
}