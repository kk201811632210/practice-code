#define _CRT_SECURE_NO_WARNINGS 1;


#include <stdio.h>
#include <string.h>
#include <math.h>



//1. ������A�е����ݺ�����B�е����ݽ��н�����������һ����
//int main()
//{
//	int sz = 0;
//	int i = 0;
//	int ret = 0;
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int arr2[] = { 2, 3, 4, 5, 6, 7, 8, 9 };
//	sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz - 1; i++)
//	{
//		ret = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = ret;
//
//	}
//	for (i = 0; i < sz - 1; i++)
//	{
//		printf("%d ", arr1[i]);
//
//	}
//	printf("\n");
//	for (i = 0; i < sz - 1; i++)
//	{
//		printf("%d ", arr2[i]);
//
//	}
//	printf("\n");
//	
//	return 0;
//}


//����sizeof������strlen����
//int main()
//{
//	int sz = 0;
//	int ret = 0;
//	char arr1[] = "abc";
//	char arr2[] = { "abc" };
//	sz = sizeof(arr1) / sizeof(arr1[0]);
//	ret = strlen(arr1);
//	printf("%d %d", sz,ret);
//
//	return 0;
//}

//���char��������������
//int main()
//{
//	int sz = 0;
//	int i = 0;
//	int ret = 0;
//	char arr1 = "abcde";
//	char arr2 = "bcdef";
//	printf("%c", arr1[0]);
//	sz=strlen(arr1);
//	for (i = 0; i < sz; i++)
//	{
//		//ret = arr1[];
//		//arr1[] = arr2[i];
//		//arr2[i] = ret;
//	}
//
//	return 0;
//}


//����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ��
//int main()
//{
//	double i = 0;
//	double sum1 = 0;
//	int flag = 0;
//	double ret = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		ret = 1 / i;
//		if (flag == 0)
//			sum1 = sum1 + ret;
//		else
//			sum1 = sum1 - ret;
//		flag = ~flag;
//	}
//	printf("%lf\n", sum1);
//
//	return 0;
//}


//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9��
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if ((i % 10) == 9)
//			count++;
//		if ((i / 10) == 9)
//			count++;
//	}
//	printf("%d \n", count);
//	return 0;
//}


//����Ļ���������ͼ����
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *


//int main()
//{
//
//	int left = 0;
//	int right = 0;
//	int mid = 0;
//	int sz = 0;
//	char str1[] = "      *      ";
//	char str2[] = "*************";
//	char str3[] = "      *      ";
//
//	sz = strlen(str2);
//	left = sz / 2-1;
//	right = sz / 2 + 1;
//	printf("%s\n", str1);
//	while (left>=0)
//	{
//		str1[left] = str2[left];
//		str1[right] = str2[right];
//		printf("%s\n", str1);
//		left--;
//		right++;
//	}
//
//	while (left<sz/2-1)
//	{
//		str2[left] = str3[left];
//		str2[right] = str3[right];
//		printf("%s\n", str2);
//		left++;
//		right--;
//	}
//	printf("%s\n", str3);
//
//
//
//	return 0;
//}

//
//���0��999֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ��������磻153��1��5��3 ? ����153��һ����ˮ�ɻ�������


//int main()
//{
//	int i = 0;
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	int ret = 0;
//	for (i = 100; i < 1000; i++)
//	{
//		x = i % 10;
//		y = i / 10 % 10;
//		z = i / 100;
//		ret = pow(x, 3) + pow(y, 3) + pow(z, 3);
//		if (ret == i)
//			printf("%d ", i);
//
//	}
//
//	return 0;
//}



//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sn = 0;
//	int i = 0;
//	int ret = 0;
//	while (1)
//	{
//		scanf("%d", &a);
//		if (a < 10)
//		{
//			b = a * 10000 + a * 1000 + a * 100 + a * 10 + a;
//			for (i = 10; i <= 100000; i *= 10)
//			{
//				ret = b % i;
//				sn = sn + ret;
//			}
//			printf("%d\n", sn);
//			break;
//
//		}
//		else
//			printf("�������������С��10������\n");
//
//	}
//
//	return 0;
//}


//��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������

//
//int main()
//{
//	char ret = 0;
//	ret = getchar();
//	if ((ret >= 'a')&&(ret <= 'z'))
//	{
//		ret = ret - 32;
//		printf("%c\n", ret);
//	}
//	else if ((ret >= 'A')&&(ret <= 'Z'))
//	{
//		ret = ret + 32;
//		printf("%c\n", ret);
//	}
//	else
//		printf("���벻��ȷ\n");
//	return 0;
//}


//��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����


int main()
{
	int i = 0;
	char str1[20] = { 0 };
	char passward[] = "woshizhu";
	printf("����������:");
	scanf("%s", str1);
	for (i = 1; i < 3; i++)
	{
		if (strcmp(str1, passward) == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
	
			printf("����������������룺");
			
		}
		scanf("%s", str1);
	}
	if (i==3)
		printf("����������������˻��Ѷ���\n");
	return 0;
}


