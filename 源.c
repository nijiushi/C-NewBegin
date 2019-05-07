#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Palindrome(char *a)
{
	char *begin = a;
	char *end = a + strlen(a) - 1;
	while (*begin == *end&&begin < end)
	{
		begin++;
		end--;
	}
	if (begin >= end)
	{
		puts("ÊÇ");
	}
	else
		puts("NO");
}
int main()
{
	char a[100];
	gets(a);
	Palindrome(a);
	system("pause");
	return 0;
}