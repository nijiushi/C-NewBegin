#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, t;
	scanf("%d %d", &a, &b);
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	int r = a%b;
	int n = a*b;
	while (r)
	{
		a = b;
		b = r;
		r = a%b;
	}
	printf("���Լ����%d ��С��������%d", b, n / b);
	system("pause");
	return 0;
}