#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include"List.h"

static void CopyToNode(Item item, Node* pnode);

//�����ʼ��
void InitialzeList(List* plist)
{
	*plist = NULL;
}

//�ж������Ƿ�Ϊ��
bool ListIsEmpty(const List* plist)
{
	if (*plist == NULL)
		return true;
	else
		return false;
}

//�ж������Ƿ�����
bool ListIsFull(const List* plist) 
{
	Node* ps;
	bool full;
	ps = (Node*)malloc(sizeof(Node));
	
	if (ps == NULL)
		full = true;
	else
		full = false;

	free(ps);
	return full;
}

//ȷ�������е�����
unsigned int ListItemCount(const List* plist)
{
	unsigned int count = 0;
	Node* pnode = *plist;

	while (pnode != NULL)
	{
		pnode = pnode->next;
		count++;
	}

	return count;
}

//�������
bool AddItem(Item item, List* plist)
{
	Node* pnew;
	Node* scan = *plist;

	pnew = (Node*)malloc(sizeof(Node));
	if (pnew == NULL)
		return false;

	CopyToNode(item, pnew);
	pnew->next = NULL;
	if (scan == NULL)
		*plist = pnew;
	else
	{
		while (scan->next != NULL)
		{
			scan = scan->next;
		}
		scan->next = pnew;
	}

	return true;
}

//��������
void Traverse(const List* plist, void(*pfun)(Item item))
{
	Node* pnode = *plist;

	while (pnode != NULL)
	{
		(*pfun)(pnode->item);
		pnode = pnode->next;
	}
}

//�ͷ�����
void EmptyThelist(List* plist)
{
	Node* psave;

	while (*plist != NULL)
	{
		psave = (*plist)->next;
		free(*plist);
		*plist = psave;
	}
}

static void CopyToNode(Item item, Node* pnode)
{
	pnode->item = item;
}