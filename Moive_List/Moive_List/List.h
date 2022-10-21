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

//链表初始化
void InitialzeList(List* plist);

//判断链表是否为空
bool ListIsEmpty(const List* plist);

//判断链表是否已满
bool ListIsFull(const List* plist);

//确定链表中的项数
unsigned int ListItemCount(const List* plist);

//链表添加
bool AddItem(Item item, List* plist);

//操作链表
void Traverse(const List* plist, void(*pfun)(Item item));

//释放链表
void EmptyThelist(List* plist);
#endif // !LIST_H_
