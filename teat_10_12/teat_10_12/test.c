#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<assert.h>

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//#define SWAP(x) 

//#define OFFSETOF(struct_name, number_name)  (int)&(((struct_name*)0)->number_name) 
//
//struct s
//{
//	char a1;
//	int a2;
//	char a3;
//};
//
//int main()
//{
//	printf("%d\n", OFFSETOF(struct s, a1));
//	printf("%d\n", OFFSETOF(struct s, a2));
//	printf("%d\n", OFFSETOF(struct s, a3));
//	return 0;
//}

//#define SWAP(N) ((((0x55555555)&N)<<1)+(((0xaaaaaaaa)&N)>>1))
//
//int main()
//{
//	int a = 2;
//	printf("%d\n", SWAP(a));
//	return 0;
//}
//���������Ƶ���żλ
//01010101010101010101010101010101����λ
//�����Nȥ��λ����ʽ���ܵ����ó�N������λ
//ʮ�����ƣ�0x55555555


//�ҵ���
//ͬһ�����������û��Ӱ��
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	//�ҵ��������ڶ������ϵĲ�ͬ
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//		{
//			pos = i;
//		}
//	}
//	int num1 = 0;
//	int num2 = 0;
//	//��pos���������ֳ�����
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			num1 ^= arr[i];
//		}
//		else
//		{
//			num2 ^= arr[i];
//		}
//	}
//
//	printf("single dog 1: %d, single dog 2: %d\n", num1, num2);
//	return 0;
//}

//atoiģ��ʵ��
//enum Judge
//{
//	VAILD,
//	UNVAILD,
//};
//
//enum Judge a = UNVAILD;
//
//int my_atoi(const char* str)
//{
//	if (str == NULL)
//	{
//		return 0;
//	}
//	if (*str == '\0')
//	{
//		return 0;
//	}
//
//	int flag = 1;
//	if (*str == '+')
//	{
//		str++;
//	}
//	else if (*str == '-')
//	{
//		str++;
//	}
//	while (isspace(*str))
//	{
//		str++;
//	}
//
//	long long ret = 0;
//	while (isdigit(*str))
//	{
//		ret = ret * 10 + flag * (*str - '0');
//		str++;
//	}
//	
//	if (*str == '\0')
//	{
//		a = VAILD;
//		return (int)ret;
//	}
//	else
//	{
//		return (int)ret;
//	}
//}
//
//int main()
//{
//	char str[] = "123a";
//	printf("atoi = %d\n", atoi(str));
//	printf("my_atoi = %d\n", my_atoi(str));
//	return 0;
//}

//void* my_memmove(void* des, const void* sour, int num)
//{
//	assert(des && sour);
//	void* ret = des;
//	if (sour > des)
//	{
//		while (num >= 0)
//		{
//			*((char*)des + num) = *((char*)sour + num);
//			num--;
//		}
//	}
//
//	if (sour < des)
//	{
//		int count = 0;
//		while (count <= num)
//		{
//			*((char*)des + count) = *((char*)sour + count);
//			count++;
//		}
//	}
//
//	return des;
//}
//
//void* memmove(void* dst, const void* src, size_t count) {
//	void* ret = dst;
//	if (dst <= src || (char*)dst >= ((char*)src + count)) {
//		while (count--) {
//			*(char*)dst = *(char*)src;
//			dst = (char*)dst + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else {
//		dst = (char*)dst + count - 1;
//		src = (char*)src + count - 1;
//		while (count--) {
//			*(char*)dst = *(char*)src;
//			dst = (char*)dst - 1;
//			src = (char*)src - 1;
//		}
//	}
//	return(ret);
//}
//
//
//int main()
//{
//	char str[] = "guguxiekai";
//	my_memmove(&str[4], &str[0], 4);
//	printf(str);
//	return 0;
//}