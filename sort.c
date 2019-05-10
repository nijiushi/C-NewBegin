#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void sort(int *a, int length)
{
	int i, t, j;
	for (i = 0; i < length - 1; i++)
	{
		for (j = 0; j<length - i - 1; j++)
		{
			if (a[i] > a[i + 1])
			{
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
		}
	}
}
int main()
{
	int a[] = { 4, 1, 3, 6, 7 };
	sort(a, 5);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}