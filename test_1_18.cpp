#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

//1. ���� n�Ľ׳ˡ�
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
//	printf("%d�׳˵Ľ��Ϊ��%d\n",a,ret);
//	
//
//	
//	return 0;
//}

//2. ���� 1!+ 2!+ 3!+ ���� + 10!
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

//3. ��һ�����������в��Ҿ����ĳ������n����������ֲ��ң�
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
//			printf("�ҵ������±�Ϊ%d\n", num);
//			break;
//		}
//			
//
//	}
//	if (left>right)
//		printf("�Ҳ��������\n");
//
//	return 0;
//}


//4. ��д���룬��ʾ����ַ��������ƶ������м��ۡ�
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
//		Sleep(1000);//��ʱ������ͷ�ļ�windows.h
//		system("cls");//��������
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//5. ��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ��
//��ʾ��¼�ɣ�������ξ�����������˳�������ȷ������Ϊ123456
//int main()
//{
//	int i = 0;
//	char password[20] = {};
//	for (i = 0; i < 3;i++ )
//	{
//		printf("���������룺");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//			
//		else
//			printf("�������");
//	}
//	if (i == 3)
//	{
//		printf("�˺Ŷ���\n");
//	}
//	return 0;
//}

