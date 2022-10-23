#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//struct stu
//{
//	char name[5];
//	int age;
//	char sex[5];
//
//};
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "rb");
//
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//	//fputc('g', pf);
//	//fputc('o', pf);
//	//fputc('o', pf);
//	//fputc('d', pf);
//
//	//printf("%c", fgetc(pf));
//	//printf("%c", fgetc(pf));
//	//printf("%c", fgetc(pf));
//	//printf("%c", fgetc(pf));
//
//	//char str[20] = { 0 };
//
//	//fgets(str, 5, pf);
//	//fputs(str, pf);
//
//	//fprintf(pf, "%s %s", "age of Leo is", "22");
//	//fscanf(pf, "%s", str);
//
//	//struct stu a = { "xiek",22,"boy" };
//	//fwrite(&a, sizeof(struct stu), 1, pf);
//
//	//struct stu b = { 0 };
//	//fread(&b, sizeof(struct stu), 1, pf);
//	//printf("%s %d %s", b.name, b.age, b.sex);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//结构体练习：牛牛的时钟
//struct time
//{
//    int hour;
//    int min;
//    int secound;
//};
//
//struct a
//{
//    int a;
//    int arr[];
//};
//
//void If_tme_next(struct time* me, struct a* ps, int i)
//{
//    int min_plus = 0;
//    me->secound += ps->arr[i];
//    if (me->secound >= 60)
//    {
//        min_plus = me->secound / 60;
//        me->secound -= 60 * min_plus;
//        me->min += min_plus;
//        if (me->min >= 60)
//        {
//            int hour_plus = 0;
//            hour_plus = me->min / 60;
//            me->hour += hour_plus;
//            me->min -= 60 * hour_plus;
//        }
//    }
//    else
//    {
//        return;
//    }
//}
//
//int main()
//{
//    struct time me = { 0 };
//    int n;
//    scanf("%d", &n);
//    struct a* ps = (struct a*)malloc(sizeof(struct a) + sizeof(int) * n);
//
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &ps->arr[i]);
//    }
//
//    i = 0;
//    while (i <= n - 1)
//    {
//        If_tme_next(&me, ps, i);
//        printf("%d %d %d\n", me.hour, me.min, me.secound);
//        i++;
//    }
//
//    free(ps);
//    ps = NULL;
//    return 0;
//}

//void sign_off()
//{
//	puts("bye bye!");
//}
//
//void sign_off2()
//{
//	puts("I would miss you");
//}
//
//int main()
//{
//	atexit(sign_off);
//	atexit(sign_off2);
//	printf("I love you!\n");
//	return 0;
//}

//计算器
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	return x - y;
//}
//
//int mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	printf("0.exit 1.add 2.sub 3.mul 4.div\n");
//	int (*arr[])(int, int) = { 0,add,sub,mul,Div };
//	
//	int input = 0;
//	do
//	{
//		printf("请选择：>");
//		scanf("%d", &input);
//		if (input > 0 && input <= 4)
//		{
//			int x = 0;
//			int y = 0;
//			printf("请输入两个操作数：>");
//			scanf("%d %d", &x, &y);
//			printf("结果为：%d\n", arr[input](x, y));
//		}
//		else
//		{
//			printf("输入错误，请重新输入！\n");
//		}
//	} while (input);
//	printf("退出\n");
//	return 0;
//}
