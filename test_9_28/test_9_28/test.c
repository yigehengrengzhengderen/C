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
//    if (ps->arr[0] >= ps->arr[1])//�ж�����
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
//    else if (ps->arr[0] <= ps->arr[1])//�жϽ���
//    {
//        for (i = 1; i < n - 1; i++)
//        {
//            if (ps->arr[i] > ps->arr[i + 1])
//            {
//                judge = 0;
//                break;
//            }
//        }
//    }//������
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


//��������ż��˳��
// �ҵĴ���
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
// �ο�����
//void swap_arr(int arr[], int sz)
//{
//    int left = 0;
//    int right = sz - 1;
//    int tmp = 0;
//
//
//    while (left < right)
//    {
//        // ��ǰ�����ҵ�һ��ż�����ҵ���ֹͣ
//        while ((left < right) && (arr[left] % 2 == 1))
//        {
//            left++;
//        }
//
//        // �Ӻ���ǰ�ң���һ���������ҵ���ֹͣ
//        while ((left < right) && (arr[right] % 2 == 0))
//        {
//            right--;
//        }
//
//        // ���ż�����������ҵ����������������ݵ�λ��
//        // Ȼ������ң�ֱ������ָ������
//        if (left < right)
//        {
//            tmp = arr[left];
//            arr[left] = arr[right];
//            arr[right] = tmp;
//        }
//    }
//}
//��ࣺ
//1.����Ч��̫�ͣ��������ָ������������Ŀ���
//2.���ܾ��ޣ�ֻ�ܽ����һ���飬���ܺܺõ�ʹ��while