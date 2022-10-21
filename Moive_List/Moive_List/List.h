#pragma once
#ifndef LIST_H_
#define LIST_H_
#include <stdbool.h>

#define TSIZE 45
struct film
{
	char title[TSIZE];
	int rating;
};

typedef struct film Item;

typedef struct node
{
	Item item;
	struct node* next;
} Node;

typedef Node* List;

//�����ʼ��
void InitialzeList(List* plist);

//�ж������Ƿ�Ϊ��
bool ListIsEmpty(const List* plist);

//�ж������Ƿ�����
bool ListIsFull(const List* plist);

//ȷ�������е�����
unsigned int ListItemCount(const List* plist);

//�������
bool AddItem(Item item, List* plist);

//��������
void Traverse(const List* plist, void(*pfun)(Item item));

//�ͷ�����
void EmptyThelist(List* plist);
#endif // !LIST_H_
