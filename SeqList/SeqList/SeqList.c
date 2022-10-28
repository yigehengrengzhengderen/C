#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

static void CheckSL(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		size_t NewCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDateType* tmp = (SLDateType*)realloc(ps->a, NewCapacity * sizeof(SLDateType));
		if (!tmp)
		{
			perror("CheckSL Fail");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = NewCapacity;
	}
}

void SLinit(SL* ps)
{
	assert(ps);

	ps->a = NULL;
	ps->capacity = 0;
	ps->size = 0;
}

void SLPushBack(SL* ps, SLDateType n)
{
	CheckSL(ps);
	
	ps->a[ps->size] = n;
	ps->size++;
}

void SLPopBack(SL* ps)
{
	assert(ps->a);

	ps->size--;
}

void SLPrint(SL* ps)
{
	assert(ps->a);

	for (size_t i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SLPushFront(SL* ps, SLDateType n)
{
	assert(ps->a);
	CheckSL(ps);
	//从前往后覆盖
	for (size_t i = ps->size; i > 0; i--)
	{
		ps->a[i] = ps->a[i - 1];
	}

	ps->size++;
	ps->a[0] = n;
}

void SLPopFront(SL* ps)
{
	assert(ps->a);
	//从后往前覆盖
	for (size_t i = 0; i < ps->size-1; i++)
	{
		ps->a[i] = ps->a[i+1];
	}

	ps->size--;
}

void SLInsert(SL* ps, size_t pos, SLDateType n)
{
	assert(ps->a);

	CheckSL(ps);
	//从后往前覆盖到pos的位置
	for (size_t i = ps->size; i > pos-1; i--)
	{
		ps->a[i] = ps->a[i - 1];
	}
	ps->a[pos-1] = n;
	ps->size++;
}

void SLErase(SL* ps, size_t pos)
{
	assert(ps->a);
	//从pos往前覆盖到后
	for (size_t i = pos-1; i < ps->size - 1; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}

int SLFind(SL* ps, SLDateType n)
{
	//二分法查找
	size_t left = 0;
	size_t right = ps->size - 1;
	while (left < right)
	{
		size_t mid = left + (right - left) / 2;
		if (ps->a[mid] == n)
			return mid + 1;
		else if (ps->a[mid] < n)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return -1;
}


void SLDestroy(SL* ps)
{
	assert(ps->a);

	free(ps->a);
	ps->capacity = 0;
	ps->size = 0;
}
