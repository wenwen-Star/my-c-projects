
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	printf("%d\n", a);//���ͣ�ȡֵ��ΧΪ-2147483648-2147483647
	long int b;
	scanf("%ld", &b);
	printf("%d\n", b);//������,��ʽ���Ʒ�ӦΪ"ld"
	long long int c;
	scanf("%lld", &c);
	printf("%d\n", c);//�������ͣ�-2^63 - 2^63-1,�������͸�ʽ���Ʒ�ӦΪ"lld"
	float d;
	scanf("%f", &d);
	printf( "%.2f\n ", d);//�����ȸ�����
	double e;
	scanf("%lf", &e);
	printf("%.2f\n", e);//˫���ȸ�����
	char f;
	scanf(" %c", &f);//�ڣ�"%c,&f)��%cǰ����Ͽո���( "%c", &f)
	printf("%c\n", f);//�ַ���
	char g[100];//����char g[]  g����������  []��ʾ����һ�����飨����ʼ���ṩ���ַ��������������Զ�ȷ�����鳤�ȣ���δ��ʼ��������ʾ��ָ�����ȣ���char g[100]
	scanf("%s", g);//char x[]="Hello"���������Զ������鳤����Ϊ6��������β��\0
	printf("%s\n", g);
	return 0;
}