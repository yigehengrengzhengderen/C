#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 80

void Init_board(char board[ROWS][COLS], int row, int col, char set);
void Display_board(char board[ROWS][COLS], int row, int col);
void Set_min(char board[ROWS][COLS], int row, int col);
void Find_min(char min[ROWS][COLS], char show[ROWS][COLS], int row, int col);
