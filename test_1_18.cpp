#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

//1. 计算 n的阶乘。
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int ret = 1;
//	scanf("%d", &a);
//	for (i=1 ;i<=a ;i++ )
//	{
//		ret = ret*i;
//		
//	}
//	printf("%d阶乘的结果为：%d\n",a,ret);
//	
//
//	
//	return 0;
//}

//2. 计算 1!+ 2!+ 3!+ …… + 10!
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//
//	for (a = 1; a <= 3; a++)
//	{
//		for (i = 1,ret = 1; i <= a; i++)
//		{
//			ret = ret*i;
//
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//
//	
//	return 0;
//}

//3. 在一个有序数组中查找具体的某个数字n。（讲解二分查找）
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 8, 9, 10, 11 };
//	int k = 17;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0])-1;
//	int right = sz;
//	int num = 0;
//	while (left<=right)
//	{
//		num = (left + right) / 2;
//		if (k<arr[num])
//		{
//			right = num-1;
//		}
//			
//		else if (k>arr[num])
//		{
//			left = num+1;
//		}
//			
//		else
//		{
//			printf("找到的数下标为%d\n", num);
//			break;
//		}
//			
//
//	}
//	if (left>right)
//		printf("找不到这个数\n");
//
//	return 0;
//}


//4. 编写代码，演示多个字符从两端移动，向中间汇聚。
//
//int main()
//{
//	char arr1[] = "wlcome to c language!!!";
//	char arr2[] = "#######################";
//	int sz = 0;
//	sz = strlen(arr1);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//		Sleep(1000);//延时函数，头文件windows.h
//		system("cls");//清屏函数
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//5. 编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则
//提示登录成，如果三次均输入错误，则退出程序。正确的密码为123456
//int main()
//{
//	int i = 0;
//	char password[20] = {};
//	for (i = 0; i < 3;i++ )
//	{
//		printf("请输入密码：");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//			
//		else
//			printf("输入错误，");
//	}
//	if (i == 3)
//	{
//		printf("账号冻结\n");
//	}
//	return 0;
//}

