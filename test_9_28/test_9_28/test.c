#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

struct s
{
    int a;
    int arr[0];
};

int cmp(const void* p1, const void* p2)
{
    return *(int*)p1 - *(int*)p2;
}

int main() {
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int i = 0;
        struct s* ps = (struct s*)malloc(sizeof(struct s) + sizeof(int) * n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &ps->arr[i]);
        }
        qsort(ps->arr, n, sizeof(int), cmp);
        printf("%d", ps->arr[n - 1] - ps->arr[0]);
    }
    return 0;
}

//int main()
//{
//    int n = 0;
//    int i = 0;
//    int judge = 1;
//    scanf("%d", &n);
//    struct s* ps = (struct s*)malloc(sizeof(struct s) + sizeof(int) * n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &ps->arr[i]);
//    }
//    if (ps->arr[0] >= ps->arr[1])//判断升序
//    {
//        for (i = 1; i < n - 1; i++)
//        {
//            if (ps->arr[i] < ps->arr[i + 1])
//            {
//                judge = 0;
//                break;
//            }
//        }
//    }
//    else if (ps->arr[0] <= ps->arr[1])//判断降序
//    {
//        for (i = 1; i < n - 1; i++)
//        {
//            if (ps->arr[i] > ps->arr[i + 1])
//            {
//                judge = 0;
//                break;
//            }
//        }
//    }//输出结果
//    if (judge == 1)
//        printf("sorted");
//    else
//        printf("unsorted");
//    return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	while (*dest++ = *src++);
//	return ret;
//}
//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	while (*str++ != '\0')
//		count++;
//	return count;
//}
//
//int main()
//{
//	char str1[] = "good";
//	char str2[] = "yes";
//	printf("%d %d", my_strlen(str1), my_strlen(str2));
//	//printf(my_strcpy(str1, str2));
//	return 0;
//}


//调整奇数偶数顺序
// 我的代码
//int main()
//{
//	int arr1[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int arr2[5] = { 0 };
//	int i = 0;
//	int j = 1;
//	for (i = 0; i < 5; i++, j+=2)
//	{
//		arr2[i] = arr1[j];
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	for (i = 0,j = 0; i < 5; i++, j += 2)
//	{
//		arr2[i] = arr1[j];
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
// 参考代码
//void swap_arr(int arr[], int sz)
//{
//    int left = 0;
//    int right = sz - 1;
//    int tmp = 0;
//
//
//    while (left < right)
//    {
//        // 从前往后，找到一个偶数，找到后停止
//        while ((left < right) && (arr[left] % 2 == 1))
//        {
//            left++;
//        }
//
//        // 从后往前找，找一个奇数，找到后停止
//        while ((left < right) && (arr[right] % 2 == 0))
//        {
//            right--;
//        }
//
//        // 如果偶数和奇数都找到，交换这两个数据的位置
//        // 然后继续找，直到两个指针相遇
//        if (left < right)
//        {
//            tmp = arr[left];
//            arr[left] = arr[right];
//            arr[right] = tmp;
//        }
//    }
//}
//差距：
//1.运行效率太低，不会活用指针来减少数组的开辟
//2.功能局限，只能解决单一数组，不能很好的使用while