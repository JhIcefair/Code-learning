#include<stdio.h>

void main()
{
	int d, t;
	printf("结构示例：20230724,175211 or 20230714,90201\n");       //规定变量填入格式
	printf("请输入值：");
	scanf_s("%d,%d", &d, &t);            //获取日期及时间
	if (d==20230607)
	{
		if (t==82000)
		{
			printf("'/fill Axyz Axyz minecraft:redstone_block\r");
		}
		else
		{
			if (t==113000)
			{
				printf("'/fill Bxyz Bxyz minecraft:redstone_block\r");
			}
			else
			{
				if (t==143000)
				{
					printf("'/fill Axyz Axyz minecraft:redstone_block\r");
				}
				else
				{
					if (t==170000)
					{
						printf("'/fill Bxyz Bxyz minecraft:redstone_block\r");
					}
				}
			}
		}
	}
	else
	{
		if (d==20230608)
		{
			if (t==83000)
			{
				printf("'/fill Axyz Axyz minecraft:redstone_block\r");
			}
			else
			{
				if (t==113000)
				{
					printf("'/fill Bxyz Bxyz minecraft:redstone_block\r");
				}
				else
				{
					if (t==142500)
					{
						printf("'/fill Axyz Axyz minecraft:redstone_block\r");
					}
					else
					{
						if (t==170000)
						{
							printf("'/fill Bxyz Bxyz minecraft:redstone_block\r");
						}
					}
				}
			}
		}
	}
}
