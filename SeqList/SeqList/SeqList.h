#pragma once

#include<stdlib.h>
#include<stdio.h>
#include<assert.h>

typedef int SLDateType;

typedef struct SeqList
{
	SLDateType* a;
	size_t size;
	size_t capacity;
}SL;

//顺序表的初始化和销毁
void SLinit(SL* ps);
void SLDestroy(SL* ps);

//顺序表的基本功能：
void SLPushBack(SL* ps, SLDateType n);
void SLPushFront(SL* ps, SLDateType n);
void SLPopFront(SL* ps);
void SLPopBack(SL* ps);
void SLPrint(SL* ps);

//顺序表查找
int SLFind(SL* ps, SLDateType n);
//顺序表在pos位置插入
void SLInsert(SL* ps, size_t pos, SLDateType n);
//删除在pos位置的值
void SLErase(SL* ps, size_t pos);