#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void sort(int *a, int length)
{
	for (int i = 1; i < length; i++)
	{
		int start = 0;
		int end = i - 1;
		int temp = a[i];
		int mid = 0;
		while (start <= end)
		{
			mid = (start + end) / 2;
			if (temp < a[mid])
			{
				end = mid - 1;
			}
			else
				start = mid + 1;
		}
		for (int j = i; j>start; j--)
		{
			a[j] = a[j - 1];
		}
		a[start] = temp;
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