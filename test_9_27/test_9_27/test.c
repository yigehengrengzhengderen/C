#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��ҵ8��6��
int main() {
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int i = 0;
        //�ϰ벿��
        int count = 1;
        for (i = n; i > 0; i--)
        {
            int j = 0;
            for (j = 1; j <= i; j++)
            {
                printf("  ");
            }
            for (j = 1; j <= count; j++)
            {
                printf("*");
            }
            count++;
            printf("\n");
        }
        for (i = 0; i < n + 1; i++)
        {
            printf("*");
        }
        printf("\n");
        //�°벿
        count = n;
        for (i = 1; i <= n; i++)
        {
            int j = 0;
            for (j = 1; j <= i; j++)
            {
                printf("  ");
            }
            for (j = 1; j <= count; j++)
            {
                printf("*");
            }
            count = count - 1;
            printf("\n");
        }
    }
    return 0;
}



//struct s
//{
//    int a;
//    int arr[0];
//};
//
//int cmp(const void* p1, const void* p2)
//{
//    return *(int*)p1 - *(int*)p2;
//}
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int i = 0;
//    scanf("%d %d", &n, &m);
//    //��������
//    struct s* ps = (struct s*)malloc(sizeof(struct s) + sizeof(int) * (n + m));
//    //��������
//    for (i = 0; i < n + m; i++)
//    {
//        scanf("%d", &ps->arr[i]);
//    }
//    //��������
//    qsort(ps->arr, m + n, sizeof(int), cmp);
//    //�������������ͬ����
//    for (i = 0; i < n + m - 1; i++)
//    {
//        if (ps->arr[i] == ps->arr[i + 1])
//        {
//            int j = 0;
//            for (j = i; j < n + m - 1; j++)
//            {
//                ps->arr[i] = ps->arr[i + 1];
//            }
//        }
//    }
//    //��ӡ����
//    for (i = 0; i < n + m; i++)
//    {
//        printf("%d ", ps->arr[i]);
//    }
//    free(ps);
//    ps = NULL;
//    return 0;
//}

//#define ROW 10
//#define COL 10
//int main()
//{
//	int arr[ROW][COL] = { 0 };
//	int i = 0;
//	int j = 0;
//	//��һ�кͶԽ��߶�Ϊ1
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)//��һ��Ϊ1
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)//�Խ���Ϊ1
//			{
//				arr[i][j] = 1;
//			}
//			//�ӵ����У���һ�е�Ԫ�ؿ�ʼ���м��ÿ��Ԫ�ض����������������Ԫ��֮��
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < ROW; i++)//��ӡ�ո������
//	{
//		for (j = 0; j < (ROW - 1) - i; j++)
//		{
//			printf("  ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%-3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
// ��ҵ8��9��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	for (a = 0; a < 2; a++)
//	{
//		for (b = 0; b < 2; b++)
//		{
//			for (c = 0; c < 2; c++)
//			{
//				for (d = 0; d < 2; d++)
//				{
//					if ((a == 0) + (c == 1) + (d == 1) + (d == 0) == 3)
//					{
//						if (a + b + c + d == 1)
//						printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//A˵�������ҡ�
//
//B˵����C��
//
//C˵����D��
//
//D˵��C�ں�˵
//
//��֪3����˵���滰��1����˵���Ǽٻ�


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if ((a + b + c + d + e == 15)&&(a * b * c * d * e == 120))
//							printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}