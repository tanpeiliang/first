#include "controls.h"
#include "Unit.h"
#include "food.h"
#include "welcome.h"
#include <conio.h>
#include <iostream>
using namespace std;
void control::drawGamestart()
{
	color(2);
	printf("                                                                                         \n");
	printf("                       __________       ___                                              \n");
	printf("                      /          \\     / \\ \\    |____      __\\__                     \n");
	printf("                     /  ________  \\   / ___ \\  _/ __     | |   /                       \n");
	printf("                     |  |      |__|     _/_   |_|  /    [|] |/                           \n");
	printf("                     |  |              | | |      /     _|_ \\__/                        \n");
	printf("                     \\  \\_______        / \\      |___/        ____                    \n");
	printf("                      \\         \\    ____ ____      ____   __ |  |  ___   ______       \n");
	printf("                       \\_______  \\   |  |/    \\    /    \\_/ / |  | /  /  /      \\   \n");
	printf("                               \\  \\  |    ___  \\  / ____   /  |  |/  /  /  ____  \\   \n");
	printf("                     __        |  |  |   /   \\  \\ | |  |  /   |     /  |  /____\\  |   \n");
	printf("                    \\  \\_______|  |  |  |    |  | | |__|  |   |     \\  |  ________/   \n");
	printf("                     \\            /  |  |    |  |  \\       \\  |  |\\  \\  \\  \\____  \n");
	printf("                      \\__________/   |__|    |__|   \\___/\\__\\ |__| \\__\\  \\______/ \n");
	int n;
	int i, j = 1;
	gotoxy(43, 18);
	color(12);
	printf("贪 吃 蛇 大 作 战");
	color(10);          			//黄色边框
	for (i = 20; i <= 26; i++)   	//输出上下边框┅
	{
		for (j = 27; j <= 74; j++)  //输出左右边框┇
		{
			gotoxy(j, i);
			if (i == 20 || i == 26)
			{
				printf("-");
			}
			else if (j == 27 || j == 74)
			{
				printf("|");
			}
		}
	}
	color(12);
	gotoxy(35, 22);
	printf("1.开始游戏");
	gotoxy(55, 22);
	printf("2.游戏说明");
	gotoxy(35, 24);
	printf("3.退出游戏");
	gotoxy(29, 27);
	color(12);
	printf("请选择[1 2 3]:[ ]\b\b");        //\b为退格，使得光标处于[]中间
	color(12);
	cin >> n;  		//输入选项
	switch (n) {
	case 1: {
		welcome welcome1;
		welcome1.run();
		break;
	}
	case 2: {
		welcome welcome1;
		welcome1.changeInfos();      	//游戏说明函数
		break;
	}
	case 3:
		exit(0);     		//退出游戏
		break;
	default:				//输入非1~3之间的选项
		color(12);
		gotoxy(40, 28);
		printf("请输入1~3之间的数!");
		_getch();			//输入任意键
		system("cls");		//清屏
		control controls1;
		controls1.drawGamestart();
	}
}
void control::drawGameInfom()
{
	int i, j;
	for (i = 0; i < 58; i += 2)
	{
		gotoxy(i, 0);
		color(5);
		cout << "□";
		gotoxy(i, 26);
		cout << "□";
	};
	for (i = 1; i < 26; i++)
	{
		gotoxy(0, i);
		cout << "□";
		gotoxy(56, i);
		cout << "□";
	};
	//for (i = 2; i < 56; i += 2)
	//{
	//	for (j = 1; j < 26; j++)
	//	{
	//		gotoxy(i, j);
	//		color(3);
	//		cout << "■";
	//	};
}
//void control::drawGameInfom()
//{
//	int i, j;
//	for (i = 0; i < 58; i += 2)
//	{
//		gotoxy(i, 0);
//		color(5);
//		cout << "□";
//		gotoxy(i, 26);
//		cout << "□";
//	};
//	for (i = 1; i < 26; i++)
//	{
//		gotoxy(0, i);
//		cout << "□";
//		gotoxy(56, i);
//		cout << "□";
//	};
//	for (i = 2; i < 56; i += 2)
//	{
//		for (j = 1; j < 26; j++)
//		{
//			gotoxy(i, j);
//			color(3);
//			cout << "■";
//		};
//}

