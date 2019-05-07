# C-NewBegin 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int PalindromeNumber(int n)
{
	int num = 0;
	while (n)
	{
		num = num * 10 + n % 10;
		n /= 10;
	}
	return num;
}
int main()
{
	int n = 12321;	
	PalindromeNumber(n);
	if (PalindromeNumber(n) == n)
	{
		puts("是");
	}
	else
		puts("不是");
	system("pause");
	return 0;
}
