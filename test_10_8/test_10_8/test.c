#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void game()
{
	char min[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//初始化函数
	Init_board(min, ROWS, COLS, '0');
	Init_board(show, ROWS, COLS, '*');
	//打印棋盘
	//Display_board(min, ROW, COL);
	Display_board(show, ROW, COL);

	//布置雷
	Set_min(min, ROW, COL);
	//Display_board(min, ROW, COL);

	//排雷
	Find_min(min, show, ROW, COL);

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("选择错误，请重新选择！");
			break;
		}
	} while (input);
	return 0;
}