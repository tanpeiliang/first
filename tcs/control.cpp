#include "control.h"
#include "control.h"
#include "Unit.h"
#include "control.h"
#include "DrawMap.h"
#include <iostream>
using namespace std;
control::control()
{
	//HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	//
	//m_coor = GetLargestConsoleWindowSize(hOut);
	//CloseHandle(hOut); // 关闭标准输出设备句柄
	///*const int KWIDTH = coor.X;
	//const int KHEIGHT = coor.Y;*/
	///*m_coor = coor;*/
	/*RECT rect;
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetClientRect(hOut, &rect);	*/
	HANDLE hOut;
	CONSOLE_SCREEN_BUFFER_INFO scr;

	hOut = GetStdHandle(STD_OUTPUT_HANDLE); /* 获取标准输出句柄 */
	GetConsoleScreenBufferInfo(hOut, &scr);
	m_coor.X = scr.srWindow.Right;
	m_coor.Y = scr.srWindow.Bottom;
}

control::~control()
{
}

void control::drawGameArea()
{
	//todo
	/*for (int i = unit::KLEFT; i <=  m_coor.X - 2*unit::KLEFT; i++)
	{
		unit::gotoxy(i, unit::KUP);
		cout << "-";
		unit::gotoxy(i, unit::KUP+2);
		cout << "-";
		unit::gotoxy(i, m_coor.Y - 2*unit::KUP);
		cout << "-";
	}

	for (int i = unit::KUP+1; i <= m_coor.Y -1- 2 * unit::KUP; i++)
	{
		unit::gotoxy(unit::KLEFT, i);
		cout << "|";
		unit::gotoxy(m_coor.X - 2 * unit::KLEFT, i);
		cout << "|";
	}*/
	Unit::gotoxy(Unit::KLEFT, Unit::KUP);
	for (int j = 0; j < Unit::KWIDTH; j++)
	{
		cout << "-";
	}

	for (int i = 0; i < Unit::KHEIGHT; i++)
	{
		Unit::gotoxy(Unit::KLEFT, Unit::KUP + 1 + i);
		cout << "|";
		Unit::gotoxy(Unit::KLEFT + Unit::KWIDTH - 1, Unit::KUP + 1 + i);
		cout << "|";
	}

	Unit::gotoxy(Unit::KLEFT, Unit::KUP + Unit::KHEIGHT + 1);
	for (int k = 0; k < Unit::KWIDTH; k++)
	{
		cout << "-";
	}

	Unit::gotoxy(Unit::KLEFT + 1, Unit::KUP + 2);
	for (int i = 0; i < Unit::KWIDTH - 2; i++)
	{
		cout << "-";
	}
}

void control::drawGameInfo()
{
	//todo
	Unit::gotoxy(Unit::KLEFT + 1, Unit::KUP + 1);

	cout << "游戏名称：贪吃蛇";

	Unit::gotoxy(Unit::KLEFT + 20, Unit::KUP + 1);

	cout << "编写者：***";

	Unit::gotoxy(Unit::KLEFT + 40, Unit::KUP + 1);

	cout << "当前得分";

	Unit::gotoxy(Unit::KLEFT + Unit::KSCORE_OFFSET, Unit::KUP + 1);

	cout << m_iScore;

	Unit::gotoxy(Unit::KLEFT + 55, Unit::KUP + 1);

	cout << "当前关卡";

	Unit::gotoxy(Unit::KLEFT + Unit::KLEVEL_OFFSET, KUP + 1);

	cout << m_iLevel;

