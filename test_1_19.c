#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>



//写代码将三个整数数按从大到小输出。
//int main()
//{
//	int a, b, c;
//	int ret = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		ret = a;
//		a = b;
//		b = ret;
//	}
//	if (a < c)
//	{
//		ret = a;
//		a = c;
//		c = ret;
//	}
//	if (b < c)
//	{
//		ret = b;
//		b = c;
//		c = ret;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//写一个代码打印1 - 100之间所有3的倍数的数字
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	printf("\n");
//
//	return 0;
//}


//给定两个数，求这两个数的最大公约数

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret = 0;
//	int r = 0;
//	printf("请输入两个数字：");
//	scanf("%d %d", &a, &b);
//	if (a < b)
//	{
//		ret = a;
//		a = b;
//		b = ret;
//	}
//	while (1)
//	{
//		r = a%b;
//		if (r == 0)
//		{
//			printf("最大公约数为%d\n", b);
//			break;
//		}
//		else
//		{
//			a = b;
//			b = r;
//			continue;
//		}
//
//	}
//
//	return 0;
//}


//打印1000年到2000年之间的闰年
//		//判断y是不是闰年
//		//1. 被4整除，不能被100整除是闰年
//		//2. 能被400整除是闰年
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//			count++;
//		}
//			
//	}
//	printf("\n闰年总数为：%d\n",count);
//	return 0;
//}



//写一个代码：打印100~200之间的素数
//素数 - 质数
//只能被1和它本身整除
//算法1
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j == i)
//			printf("%d ", i);
//
//	}
//	printf("\n");
//	return 0;
//
//}

//算法2
//int main()
//{
//	int i = 0;
//	int j = 0;
//	double sz = 0;
//	int flag = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		sz = sqrt(i);
//		
//		for (j = 2; j < sz; j++)
//		{
//			if (i%j == 0)
//			{
//				flag = 0;
//				break;
//
//			}
//			else
//				flag = 1;
//			
//		}
//		if (flag==1)
//			printf("%d ", i);
//
//	}
//	printf("\n");
//	return 0;
//
//}

//算法3
//int main()
//{
//	int i = 0;
//	int j = 0;
//	double sz = 0;
//	int flag = 0;
//	for (i = 101; i < 200; i += 2)
//	{
//		sz = sqrt(i);
//
//		for (j = 2; j < sz; j++)
//		{
//			if (i%j == 0)
//			{
//				flag = 0;
//				break;
//
//			}
//			else
//				flag = 1;
//
//		}
//		if (flag == 1)
//			printf("%d ", i);
//
//	}
//	printf("\n");
//	return 0;
//
//}

//关机程序
//只要运行起来，电脑就在1分钟内关机，如果输入：我是猪，就取消关机!

//
//shutdown -s -t 60
//shutdown -a
//

//int main()
//{
//	char arr[20] = {0};
//	system("shutdown - s - t 60");
//again:
//	printf("请注意，您的电脑将会在一分钟后关闭，如果想撤销此次操作，请输入“我是猪”\n");
//	while (1)
//	{
//		printf("请输入：");
//		scanf("%s", arr);
//		if (strcmp(arr, "我是猪")==0)
//		{
//			printf("取消成功\n");
//			system("shutdown -a");
//			break;
//			
//		}
//			
//		else
//		{
//			goto again;
//		}
//
//
//	}
//
//	return 0;
//}

