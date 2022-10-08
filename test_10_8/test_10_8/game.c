#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("***********************\n");
	printf("****1.play 0.exit******\n");
	printf("***********************\n");
}


void Init_board(char board[ROWS][COLS], int row, int col, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = set;
		}
	}
}


void Display_board(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void Set_min(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_min(char min[ROWS][COLS], int x, int y)
{
	return (min[x - 1][y] +
		min[x - 1][y - 1] +
		min[x][y - 1] +
		min[x + 1][y - 1] +
		min[x + 1][y] +
		min[x + 1][y + 1] +
		min[x][y + 1] +
		min[x - 1][y + 1] - 8*'0');
}


void Find_min(char min[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;

	while (win<col*row - EASY_COUNT)
	{
		printf("������Ҫ�Ų�����꣺");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (min[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				Display_board(min, ROW, COL);
				break;
			}
			else
			{
				int count = get_min(min, x, y);
				show[x][y] = count + '0';
				Display_board(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("����Ƿ������������룡\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ���\n");
		Display_board(min, ROW, COL);

	}
}
