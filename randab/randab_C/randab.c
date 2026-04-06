#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main() 
{
	int a = 0;
	int b = 0;
	int x = 0;
	int y = 0;
	int i = 0;
	printf("公式：x=rand() a+b\n");
	printf("请输入a值：");
	scanf_s("%d", &a);
	printf("请输入b值：");
	scanf_s("%d", &b);
	printf("请确认公式：x=rand() %d + %d\n", a, b);
	scanf_s("%d", &y);
	do
	{
		srand((unsigned)time(NULL));		//定义rand函数种子
		x = rand() % a + b;
		printf("%d\n", x);
		scanf_s("%d", &y);
		i++;
	} while (i != 50);
	printf("程序已终止\n");
	scanf_s("%d", &y);
}
