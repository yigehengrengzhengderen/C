#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//
//void replaceSpace(char* str, int length)
//{
//	int count = 0;
//	while (count < length)
//	{
//		if (str[count] == ' ')
//		{
//			str[count] = '%';
//			int n = length;
//			while (count < n)
//			{
//				str[n + 2] = str[n];
//				n--;
//			}
//			count += 2;
//			length += 2;
//			str[count - 1] = '2';
//			str[count] = '0';
//		}
//		count++;
//	}
//}
//
//
//int main()
//{
//	char str[40] = "we are happy";
//	//char str[40] = { 0 };
//	//sprintf(str, "we are happy");
//	int len = strlen(str);
//	replaceSpace(str, len);
//	printf("%s", str);
//	return 0;
//}
//链表初试
#define NAME_MAX 20

typedef struct Stu
{
	char name[NAME_MAX];
	int age;
	struct Stu* next;
} stu;



int main()
{
	stu* head = NULL;
	struct Stu* current, * prev = NULL;
	char tmp[NAME_MAX] = { 0 };

	puts("输入学生名单：");
	while (scanf("%s", tmp))
	{
		if (!strcmp(tmp, "无"))
			break;
		current = (struct Stu*)malloc(sizeof(struct Stu));
		if (current == NULL)
		{
			break;
		}
		if (head == NULL)
			head = current;
		else
			prev->next = current;

		current->next = NULL;
		strcpy(current->name, tmp);
		puts("输入学生的学号：");
		scanf("%d", &current->age);
		puts("输入下一个学生的姓名（输入无，停止输入）：");
		prev = current;
	}

	printf("学生名单：\n");
	current = head;
	while (current != NULL)
	{
		printf("%s %d\n", current->name, current->age);
		current = current->next;
	}

	current = head;
	while (current != NULL)
	{
		head = current->next;
		free(current);
		current = head;
	}

	printf("咕咕\n");

	return 0;
}