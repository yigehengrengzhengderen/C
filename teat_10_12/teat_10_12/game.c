#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��������Ϸ
void Print_menu()
{
	printf("**************************\n");
	printf("     1.play  0.out        \n");
	printf("**************************\n");
}

void game()
{
	srand((unsigned int)time(NULL));
	int Randon = rand() % 100 + 1;
	printf("����������������Կ�ʼ��Ϸ\n");
	do
	{
		int Guess = 0;
		printf("�����룺>");
		scanf("%d", &Guess);
		if (Guess > Randon)
			printf("����\n");
		else if (Guess < Randon)
			printf("С��\n");
		else if (Guess == Randon)
		{
			printf("��¶��ˣ�\n");
			break;
		}
	} while (1);
}

int main()
{
	int input = 0;
	do
	{
		Print_menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}