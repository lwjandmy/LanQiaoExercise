// 问题描述
// 　　编写一个程序，首先输入一个整数，例如5，然后在屏幕上显示如下的图形（5表示行数）：
// 　　* * * * *
// 　　* * * *
// 　　* * *
// 　　* *
// 　　*

#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int iInput;
	scanf("%d", &iInput);

	for (int i = 0; i != iInput; ++i)
	{
		for (int j = 0; j < iInput - i; ++j)
			printf("* ");
		printf("\n");
	}
	return 0;
}
