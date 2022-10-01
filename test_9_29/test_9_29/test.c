#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
//计算求和
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int sum = a;
//	int i = 0;
//	int tmp = a;
//	for (i = 1; i < 5; i++)
//	{
//		tmp = tmp*10 + a;
//		sum += tmp;
//	}
//	printf("%d ", sum);
//	return 0;
//}

//水仙花数
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int n = 1;
//		int tmp = i;
//		while (tmp /= 10)n++;
//		int j = 0;
//		int sum = 0;
//		tmp = i;
//		for (j = 0; j < n; j++)
//		{
//			sum += (int)pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//			printf("%d ", sum);
//	}
//	return 0;
//}

//打印菱形
//int main()
//{
//	int i = 0;
//	//上半部分
//	for (i = 0; i < 7; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 7 - i - 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下半部份
//	for (i = 1; i <= 6; i++)
//	{
//		int j = 0;
//		for (j = 0; j < i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (6 - i) + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//逆序字符串
//int main()
//{
//    char str[10000] = { 0 };
//    //scanf("%s", str);
//    //gets(str);
//    scanf("%[^\n]", str);
//    //针对字符串的输入
//    int left = strlen(str) - 1;
//    int right = 0;
//    while (left > right)
//    {
//        char tmp = str[right];
//        str[right] = str[left];
//        str[left] = tmp;
//        left--;
//        right++;
//    }
//    printf(str);
//    return 0;
//}
// 指针输出数组
//int main()
//{
//	int arr[5] = { 0,1,2,3,4 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//变种水仙花数
//int main()
//{
//    int i = 0;
//    for (i = 10000; i < 99999; i++)
//    {
//        int sum = 0;
//        int n = 0;
//        for (n = 10; n <= 10000; n *= 10)
//        {
//            int tmp = i;
//            sum += (tmp % n) * (tmp / n);
//        }
//        if (sum == i)
//            printf("%d ", sum);
//    }
//    return 0;
//}

//喝汽水问题
//int main()
//{
//	int moneny;
//	scanf("%d", &moneny);
//	int empty = moneny;
//	int total = moneny;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total);
//	return 0;
//}