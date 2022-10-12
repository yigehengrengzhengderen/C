#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void intit(int *p)
//{
//	int j = 0;
//	for (j = 0; j < 5; j++)
//	{
//		p[j] = 0;
//	}
//}
//
//void Print(int* p)
//{
//	int j = 0;
//	for (j = 0; j < 5; j++)
//	{
//		printf("%d ", p[j]);
//	}
//}
//
//void reverse(int* p)
//{
//	int* left = p + 4;
//	while (p < left)
//	{
//		int tmp = *left;
//		*left = *p;
//		*p = tmp;
//		p++;
//		left--;
//	}
//}
//
//int main()
//{
//	int arr1[] = { 0,1,2,3,4 };
//	int arr2[] = { 5,6,7,8,9 };
//	intit(arr1);
//	Print(arr1);
//	printf("\n");
//	Print(arr2);
//	printf("\n");
//	reverse(arr2);
//	Print(arr2);
//	//for (j = 0; j < 5; j++)
//	//{
//	//	int tmp = arr1[j];
//	//	arr1[j] = arr2[j];
//	//	arr2[j] = tmp;
//	//}
//
//	//for (j = 0; j < 5; j++)
//	//{
//	//	printf("%d ", arr1[j]);
//	//}
//	//printf("\n");
//	//for (j = 0; j < 5; j++)
//	//{
//	//	printf("%d ", arr2[j]);
//	//}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 2,5,7,8,5,4,8 };
//	int i = 0;
//	for (i = 0; i < 7; i++)
//	{
//		int x = 0;
//		for (x = 0; x < 7 - i - 1; x++)
//		{
//			if (arr[x] > arr[x + 1])
//			{
//				int tmp = arr[x];
//				arr[x] = arr[x + 1];
//				arr[x + 1] = tmp;
//			}
//		}
//	}
//
//	for (i = 0; i < 7; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//struct s
//{
//	int a;
//	float b;
//	char c;
//};
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//		return 0;
//
//	//struct s s = { 1,1.33,'c' };
//	struct s s = { 0 };
//	fscanf(pf, "%d %f %c", &(s.a), &(s.b), &(s.c));
//	printf("%d %f %c", s.a, s.b, s.c);
//	//fprintf(pf, "%d %f %c\n", s.a, s.b, s.c);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int my_pow(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * my_pow(n, k - 1);
//	}
//	else
//		return 1;
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int sum = my_pow(n, k);
//	printf("%d\n", sum);
//	return 0;
//}


//int Digitsum(int n)
//{
//	if (n > 0)
//	{
//		return n % 10 + Digitsum(n / 10);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Digitsum(n));
//	return 0;
//}

//void reverse_str(char* str, int right, int left)
//{
//	if (left > right)
//	{
//		char tmp = str[right];
//		str[right] = str[left];
//		str[left] = tmp;
//		right++;
//		left--;
//		reverse_str(str, right, left);
//	}
//}
//
//int main()
//{
//	char str[] = "abcdef";
//	reverse_str(str, 0, sizeof(str) / sizeof(str[0]) - 2);
//	printf("%s", str);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char str[] = "abcdef";
//	printf("%d\n", my_strlen(str));
//	return 0;
//}

//int Feb(int n)
//{
//	if (n > 2)
//	{
//		return Feb(n - 1) + Feb(n - 2);
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	递归
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d", Feb(a));
//	int sum = 0;
//	if (a <= 2)
//	{
//		printf("%d", a-1);
//	}
//	else
//	{
//		int tmp1 = 0;
//		int tmp2 = 1;
//		int count = 2;
//		while (count <= a)
//		{
//			sum = tmp1 + tmp2;
//			tmp1 = tmp2;
//			tmp2 = sum;
//			count++;
//		}
//		printf("%d", sum);
//	}
//	return 0;
//}

//int jie(int n)
//{
//	if (n > 1)
//	{
//		return n * jie(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//
//int main()
//{
//	//非递归
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	printf("非递归：%d\n", sum);
//	//递归
//	printf("递归：%d\n", jie(n));
//	return 0;
//}

//void print(int n)
//{
//	if (n > 0)
//	{
//		print(n / 10);
//		printf("%d\n", n % 10);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

//void Print(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%2d*%-2d=%2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}

//void Swap(int* p1, int* p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//
//int main()
//{
//	int a = 2;
//	int b = 3;
//	Swap(&a, &b);
//	printf("a=%d b=%d", a, b);
//	return 0;
//}

//int Judge_year(int n)
//{
//	if ((((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0)))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int ret = Judge_year(year);
//	if (ret == 1)
//	{
//		printf("%d 是闰年\n", year);
//	}
//	else
//	{
//		printf("%d 不是闰年\n", year);
//	}
//	return 0;
//}

//
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	float i = 0;
//	float sum = 0;
//	for (i = 1; i < 100; i++)
//	{
//		sum += i / i - i / (i + 1);
//	}
//	printf("%f", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		int tmp = i;
//		while (tmp)
//		{
//			if (tmp % 10 == 9)
//			{
//				count++;
//			}
//			tmp /= 10;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8 };
	int search = 0;
	scanf("%d", &search);
	int i = 0;
	for (i = 0; i < 8; i++)
	{
		if (arr[i] == search)
			break;
	}
	if (arr[i] == search)
		printf("%d\n", i);
	else
		printf("找不到\n");
	return 0;
}