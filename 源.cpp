//goto ��������ת
/*
#include<stdio.h>
int main()
{
	printf("hello bit");
	goto again;
	printf("�Ǻ�");
again:
	printf("���");
}
*/
//�ػ�����
//shutdown -s -t 60    ���ǵ���60��ػ���cmd����
//system()----ִ��ϵͳ����
//��װ������ͳ�Ϊ�˲�������debug���뵽���Է���������潫�����и�Ϊ�Զ����У��ͻ���ֿ���һ���Ӿ͹ػ�
/*
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char arr1[20];
again:
	system("shutdowm -s -t 60");
	printf("��ע����ĵ�����һ�����ڽ��ػ���������룺�������ƣ���ȡ���ػ�\n�����룺");
	scanf("%s", &arr1);
	if (strcmp(arr1, "��������")==0)//strcmp�Ƚ��ַ���������Ϊ0���ַ�����ͬ
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
}
*/

//����
//1.�⺯��
//2.�Զ��庯��
//1.io����2.�ַ�����������3.�ڴ��������4.ʱ�����ں���5.��ѧ����6.�����⺯��
//strcpy-----�ַ�������<string.h>
/*
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[30];
	char arr2[] = "########";
	strcpy(arr1, arr2);//��arr2�����ָ��Ƶ�arr1��,\0Ҳ�´����ȥ��������־��
	printf("%s", arr1);
}
*/

//memset�ڴ�����
/*
#include<stdio.h>
#include <string.h>
int main()
{
	char arr1[] = "liuhao love";
	memset(arr1, 'i', 6);
	puts(arr1);
}
*/

//�Զ��庯���������������������͡����������������
/*
#include<stdio.h>

int max(int x,int y)//����int ��������
{
	return(x, y) ? x : y;
}
int main()
{
	int a, b;
	printf("�������������\n");
	scanf_s("%d%d", &a, &b);
	int getmax=max(a, b);
	printf("%d", getmax);
}
*/
//a,bΪʵ�ʲ���(����Ϊһ��������ʵ�������������ʽ)��������һ��ȷ�е�ֵ���ݸ���ʽ����
//x,yΪ��ʽ����ֻ���ں�������ʹ��
//��ʵ�δ����βε�ʱ���β�Ϊʵ�ε���ʱ���������βε��޸Ĳ���ı�ʵ�Σ������ǰѵ�ַ����ȥ���ܸı�ʵ����


//������д���������x,y��������д��a,bû����ϵ��Ȼ��������x,y�����˽�������a,bû��ִ����������
//�������Ҫ�󽻻���������
//���Ե�ʱ��Ҫ���뺯����F11
/*
#include<stdio.h>
void swap(int x, int y)
{
	int tem=0;
	tem = x;
	x = y;
	y = tem;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d b=%d\n", a, b);
	swap(a, b);
	printf("a=%d b=%d", a, b);
}
*/


//����ָ��ָ���ַ����x,y����a,b�ĵ�ַ
//int*����ָ�����ͣ�*x��ָ����ʵ����a
/*
#include<stdio.h>
void swap(int* x, int* y)
{
	int tem = 0;
	tem= *x;
	*x = *y;
	*y = tem;
}

int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d b=%d\n", a, b);
	swap(&a, &b);//�����Լ�����ĺ���
	printf("a=%d b=%d", a, b);
}
*/
//�������÷�Ϊ1.��ֵ����2.��ַ����
//�ͱ�������Ķ�������һ����������ȥ��һ�����ݵ�ַ��ȥ
//1.��ֵ���ú�����ʵ�κ��βηֱ�ռ�в�ͬ���ڴ�飬���βε��޸Ĳ���Ӱ��ʵ��
//2.��ַ���ÿ����ú����ͺ����ⲿ�ı���������ϵ��Ҳ����˵�����ڲ�����ֱ�Ӳ��������ⲿ������
//���ں�������ϰ
//���ú����ķ����ж�����
/*
#include<stdio.h>

int sushu(int x)
{
	int y = 1;
	if (x == 1 || x < 1)
	{
		return 0;
	}
	for (y = 2; y < x; y++)
	{
		if (x%y == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int i = 0;
	int j = 0;
	printf("������һ�����ֽ��������ж�\n");
	scanf_s("%d", &i);
	j = sushu(i);
	if (j == 0)
	{
		printf("�����������");
	}
	if (j == 1)
	{
		printf("���������");
	}
}
*/
//��ӡ100-200����
/*
#include<stdio.h>
#include<math.h>
int is_prime(int x)
{
	int y = 1;
	if (x == 1 || x < 1)
	{
		return 0;
	}
	for (y = 2; y < sqrt(x); y++)//sqrt �����Ż�
	{
		if (x%y == 0)
		{
			return 0;
		}
	}
	return 1;
}


int main()
{
	int i = 0;
	for (i = 100; i < 200;i++)
	{
		if (is_prime(i) == 1)
		{
			printf("%d ", i);
		}
	}
}
*/



//���ú����ķ������������ݽ����ж�
/*
#include<stdio.h>

int run(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		return 1;
	}
	return 0;
}

int main()
{
	int i,j;
	printf("������һ����ݽ����ж�����\n");
	scanf_s("%d", &i);
	j = run(i);
	if (j == 1)
	{
		printf("����һ������");
	}
	if (j == 0)
	{
		printf("�ⲻ��һ������");
	}
}
*/


//���ö��ַ��ҵ�˳�������Ӧ����ĽǱ�
/*
#include<stdio.h>
int fenn(int x)
{
	int left = 0;
	char arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr1[mid] > y)
		{
			right = mid - 1;
		}
		else if (arr1[mid] < y)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	if (left > right)
	{
		return 0;
	}
}
int main()
{
	int k = 0;
	int m = 0;
	printf("������������ҵ�����(1-10)\n");
	scanf_s("%d", &k);
	m=fenn()
}
*/
//midֵһֱΪ0û�иı䣬szҲ����
/*
#include<stdio.h>

int binary_search(int arr[],int k,int sz)//�����arr[]Ϊ��Ԫ�صĵ�ַ��������Ϊָ��
{
	//�㷨��ʵ�ֶ��ַ�
	int left = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);//ָ���СΪ4/8
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	if (left > right)
	{
		return 0;
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);//�����С������������㲻Ȼ�����
	//�ں������ҵ������±��Ҳ�������0
	int ret = binary_search(arr, k, sz);//�����ڽ��д��ε�ʱ����������������һ��Ԫ�ص�ַ
	if (ret == 0)
	{
		printf("�Ҳ���ָ������");
	}
	else
	{
		printf("�ҵ���%d", ret);
	}
}
*/




//��дһ������ÿ�ε���num��һ
/*
#include<stdio.h>

int add(int* x)
{
	int i = 0;
	i = *x;
	i++;
	return i;
}
int main()
{
	int num = 1;
	int k = 0;
	int j = 0;
	j = add(&num);
	k = add(&j);
	printf("%d", k);
}
*/
//��дһ������ÿ�μ�һ
/*
#include<stdio.h>

void add(int* num)
{
	*num = *num + 1;
}
int main()
{
	int num = 0;
	add(&num);
	printf("%d\n", num);
	add(&num);
	printf("%d\n", num);
	add(&num);
	printf("%d\n", num);
}
*/


//����Ƕ��
//���������ǿ���ʹ����һ������
/*
#include<stdio.h>

void new_line()
{
	printf("hehe\n");
}
void three_line()
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		new_line();
	}
}
int main()
{
	three_line();
}
*/

//��ʽ����
//��һ�������ķ���ֵ��Ϊ��һ����������
//���磺printf("%d\n",strlen("abc"));

#include<stdio.h>
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));//printf()��ӡ��Ϊ���ֵĸ�ʽ��һ�δ�ӡ43-->2--->1���Խ����Ϊ4321
	printf("%d", 1);//���Ǵ�ӡ�ַ��������������printf("%d",43)=2
}


//�����������Ͷ���
//�������д�����������������Ҫ��������
//һ����к�����дʱ���ڸ�ʽҪ��һ�����ļ����������Ǻ������õĺ������ֿ���д
/*
#include<stdio.h>
#include "add.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = add(a, b);
	printf("%d",sum);
}

*/