#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	double a;
	printf("������������۶�\n�ҽ�Ϊ����㹤��");
	scanf("%lf", &a);
	if (a <= 10000) {
		printf("��Ĺ���Ϊ��1000Ԫ");
	}
	else if (a <=20000) {
			printf("��Ĺ���Ϊ��%lf", 1000 + (a - 10000) * 0.05);
		}
	else if (a <= 50000) {
			printf("��Ĺ���Ϊ��%lf", 1500 + (a - 20000) * 0.06);
		}
	else if (a <= 100000) {
			printf("��Ĺ���Ϊ��%lf", 3300 + (a - 50000) * 0.07);
		}
	else {
			printf("��Ĺ���Ϊ��%lf", 6800	 + (a - 100000) * 0.08);
		}
	printf("ף��������죡");
	return 0;
}