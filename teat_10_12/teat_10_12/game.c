#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//猜数字游戏
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
	printf("已生成随机数，可以开始游戏\n");
	do
	{
		int Guess = 0;
		printf("请输入：>");
		scanf("%d", &Guess);
		if (Guess > Randon)
			printf("大了\n");
		else if (Guess < Randon)
			printf("小了\n");
		else if (Guess == Randon)
		{
			printf("你猜对了！\n");
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
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("猜数字");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}