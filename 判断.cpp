#include<stdio.h>
int main()
{
	int x;
	x = 1;
	printf("������һ�����֣�");
	scanf_s("%d", &x);
	if (x % 2 == 0) {
		printf("���������ż��\n");
	}
	else {
		printf("�������������\n");
	}
	printf("���жϵ��Ƿ���ȷ��\n��ȷ������1\n����������0\n");
	int n = 1;
	scanf_s("%d", &n);
	if (n == 1) printf("�����˹�����");
	else printf("�����˹�����");
	return 0;
}