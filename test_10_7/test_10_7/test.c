#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d %d", &n1, &n2);
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n1 >> i) & 1) != ((n2 >> i) & 1))
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i) & 1)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int a = 6;
//	int b = 5;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//	return 0;
//}
//С������̨��
//int walk(int n)
//{
//    if (n <= 2)
//        return n;
//    else if (n > 2)
//        return walk(n - 1) + walk(n - 2);
//}
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    printf("%d", walk(n));
//    return 0;
//}
//������ɾ��ָ������
//struct s
//{
//    int s;
//    int arr[0];
//};
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    struct s* ps = (struct s*)malloc(sizeof(struct s) + sizeof(int) * n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &ps->arr[i]);
//    }
//    int Del = 0;
//    scanf("%d", &Del);
//    for (i = 0; i < n; i++)
//    {
//        if (Del == ps->arr[i])
//        {
//            int j = i;
//            for (; j < n - 1; j++)
//            {
//                ps->arr[j] = ps->arr[j + 1];
//            }
//            i--;//����
//            n--;
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        printf("%d ", ps->arr[i]);
//    }
//    free(ps);
//    ps = NULL;
//    return 0;
//}
//С���������ת��
//void print(int x)
//{
//    if (x > 5)
//    {
//        print(x / 6);
//    }
//    printf("%d", x % 6);
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    print(n);
//    return 0;
//}
//��ӡ���������Ƶ�����λ��ż��λ
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int i = 0;
//	//ż��λ
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	//����λ
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	return 0;
//}
//�����Ǿ����ж�
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[10][10] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n; j++)
//            scanf("%d ", &arr[i][j]);
//    }
//    int sum = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n; j++)
//        {
//            if (j < i)
//                sum += arr[i][j];
//        }
//    }
//    if (sum == 0)
//        printf("YES\n");
//    else
//        printf("NO\n");
//    return 0;
//}