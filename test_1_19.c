#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>



//д���뽫�������������Ӵ�С�����
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


//дһ�������ӡ1 - 100֮������3�ı���������
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


//���������������������������Լ��

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret = 0;
//	int r = 0;
//	printf("�������������֣�");
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
//			printf("���Լ��Ϊ%d\n", b);
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


//��ӡ1000�굽2000��֮�������
//		//�ж�y�ǲ�������
//		//1. ��4���������ܱ�100����������
//		//2. �ܱ�400����������
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
//	printf("\n��������Ϊ��%d\n",count);
//	return 0;
//}



//дһ�����룺��ӡ100~200֮�������
//���� - ����
//ֻ�ܱ�1������������
//�㷨1
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

//�㷨2
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

//�㷨3
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

//�ػ�����
//ֻҪ�������������Ծ���1�����ڹػ���������룺��������ȡ���ػ�!

//
//shutdown -s -t 60
//shutdown -a
//

//int main()
//{
//	char arr[20] = {0};
//	system("shutdown - s - t 60");
//again:
//	printf("��ע�⣬���ĵ��Խ�����һ���Ӻ�رգ�����볷���˴β����������롰������\n");
//	while (1)
//	{
//		printf("�����룺");
//		scanf("%s", arr);
//		if (strcmp(arr, "������")==0)
//		{
//			printf("ȡ���ɹ�\n");
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

