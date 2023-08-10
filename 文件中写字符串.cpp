#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE* fp;
	char str[3][10], temp[10];
	printf("请输入3个字符串：\n");
	int i, j, k, n = 3;
	for (i = 0; i < n; i++)
	{
		gets_s(str[i]);
		for (i = 0; i < n - 1; i++)
		{
			k = i;
			for (j = i + 1; j < n; j++)
			{
				if (strcmp(str[k], str[j] )> 0)
					k = j;
				if (k != i)
				{
					strcpy(temp, str[i]);
					strcpy(str[i], str[k]);
					strcpy(str[k], temp);
				}
			}
		}
	}
	if ((fp = fopen("D:\\C++的代码\\c语言的学习\\文件中写字符串\\yyyy.txt", "w")) == NULL)
	{
		printf("can't open file!\n");
		exit(0);
	}
	printf("\n字符串的顺序是：\n");
	for (i = 0; i < n; i++)
	{
		fputs(str[i], fp);
		fputs("\n", fp);
		printf("%s\n", str[i]);
	}
	return 0;
}