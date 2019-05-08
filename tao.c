#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *deleteChar(char *str, char *setchar)//str--abc stechar--a
{
	int i = 0;
	int temp[200] = { 0 };
	if (setchar == NULL)
	{
		return str;
	}
	for (i = 0; i<strlen(setchar); i++)
	{
		temp[setchar[i]] = 1;
	}
	int index = 0;
	for (i = 0; i < strlen(str); i++)
	{
		if (!temp[str[i]])
		{
			str[index++] = str[i];
		}
	}
	str[index] = '\0';
	return str;
}
int main()
{
	char s1[] = "af";
	char s2[] = "abcdf";
	printf("%s", deleteChar(s2, s1));
	system("pause");
	return 0;
}