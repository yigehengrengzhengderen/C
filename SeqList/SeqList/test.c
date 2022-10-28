#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

void SeqList1()
{
	SL a;
	SLinit(&a);

	SLPushBack(&a, 1);
	SLPushBack(&a, 2);
	SLPushBack(&a, 4);
	SLPushBack(&a, 5);
	SLPushFront(&a, 0);
	SLInsert(&a, 4, 3);
	SLErase(&a, 4);
	SLPopFront(&a);
	printf("Find = %d\n", SLFind(&a, 90));
	//SLPushBack(&a, 5);

	SLPrint(&a);
	SLDestroy(&a);
}

int main()
{
	SeqList1();
	return 0;
}