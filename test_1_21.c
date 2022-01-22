#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//输出乘法口诀表
//int main()
//{
//	int i = 1;
//	int ret = 0;
//	int j = 1;
//	for (i = 1; i <= 9;i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			ret = i*j;
//			printf("%d * %d = %-2d   ", i, j, ret);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//写一个函数可以找出两个整数中的最大值。
//int max(int a, int b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = 0;
//	ret = max(a, b);
//	printf("两个数中的最大值为:%d\n", ret);
//	return 0;
//}

//写一个函数可以交换两个整形变量的内容。
//void swap(int* a,int*b)
//{
//	int c;
//	c = *a;
//	*a = *b;
//	*b = c;
//
//
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret = 0;
//	scanf("%d %d", &a, &b);
//	swap(&a, &b);
//	printf("%d %d\n", a, b);
//
//	return 0;
//}


//写一个函数可以判断一个数是不是素数。
//int is_prime(int x)
//{
//	int j = 0;
//	for (j = 2; j < x; j++)
//	{
//		if (x%j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (is_prime(i) == 1)
//		printf("%d是素数", i);
//	else
//		printf("%d不是素数", i);
//	printf("\n");
//
//	return 0;
//}


// 写一个函数判断一年是不是闰年。

//int is_leap_year(int x)
//{
//	if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (is_leap_year(year) == 1)
//		printf("%d是闰年", year);
//	else
//		printf("%d不是闰年", year);
//	printf("\n");
//	return 0;
//}

//写一个函数，每调用一次这个函数，就会将 num 的值增加1。

//void add1(int* a)
//{
//	(*a)++;
//
//}
//
//
//int main()
//{
//	int num = 0;
//	add1(&num);
//	printf("%d ", num);
//	add1(&num);
//	printf("%d" , num);
//	printf("\n");
//
//	return 0;
//
//}

////接受一个整型值（无符号），按照顺序打印它的每一位。
//
//void print(int x)
//{
//	
//	if (x > 9)
//	{
//		print(x/10);
//    }
//	printf("%d ", x%10);
//
//}
//int main()
//{
//	int num;//比如说num=123；
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
