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

//˳���ĳ�ʼ��������
void SLinit(SL* ps);
void SLDestroy(SL* ps);

//˳���Ļ������ܣ�
void SLPushBack(SL* ps, SLDateType n);
void SLPushFront(SL* ps, SLDateType n);
void SLPopFront(SL* ps);
void SLPopBack(SL* ps);
void SLPrint(SL* ps);

//˳������
int SLFind(SL* ps, SLDateType n);
//˳�����posλ�ò���
void SLInsert(SL* ps, size_t pos, SLDateType n);
//ɾ����posλ�õ�ֵ
void SLErase(SL* ps, size_t pos);