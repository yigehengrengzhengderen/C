#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void game()
{
	char min[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	Init_board(min, ROWS, COLS, '0');
	Init_board(show, ROWS, COLS, '*');
	//��ӡ����
	//Display_board(min, ROW, COL);
	Display_board(show, ROW, COL);

	//������
	Set_min(min, ROW, COL);
	//Display_board(min, ROW, COL);

	//����
	Find_min(min, show, ROW, COL);

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("ѡ�����������ѡ��");
			break;
		}
	} while (input);
	return 0;
}