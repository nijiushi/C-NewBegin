#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int score = 0;
	char grade;
	scanf("%d", &score);
	grade = (score >= 90) ? 'A ' : ((score >= 60) ? ' B ' : 'C');
	printf("%c", grade);
	system("pause");
	return 0;
}
