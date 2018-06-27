#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include <ctime>
using namespace std;

void __menuA();
void __menuASelect();

void __menuB();
void __menuBSelect();

void __menuE();
void __menuF();
void __menuC();
void __menuD();
void getCursor(int , int );


void __menuG();
void menuUI()
{
	getCursor(40,5);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	
	cout <<"**********成绩管理系统***********" ;
	getCursor(40,6);
	cout << "**                             **";
	getCursor(40, 7);
	cout << "**";
	getCursor(42, 7);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << " A.建立               E.查找 ";
	getCursor(71, 7);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**";
	getCursor(40, 8);
	cout << "**";
	getCursor(42, 8);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << " B.添加               F.排序 ";
	getCursor(71, 8);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**";
	getCursor(40, 9);
	cout << "**";
	getCursor(42, 9);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << " C.删除               G.查看 ";
	getCursor(71,9);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**";
	getCursor(40, 10);
	cout << "**";
	getCursor(42, 10);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << " D.修改               H.保存 ";
	getCursor(71, 10);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**";
	getCursor(40, 11);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**                             **";
	getCursor(40, 12);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "*********************************" << endl;
}



void menuSelect()
{
	menuUI();
	char ch;
	getCursor(40, 14);
	cout << "请选择：";
	cin >> ch;
	switch (ch)
	{
	case 'A':
	case 'a':system("cls");
		__menuA();
		__menuASelect();
		break;
	case 'B':
	case 'b':system("cls");
		__menuB();
		__menuBSelect();
		break;
	case 'C':
	case 'c':system("cls");
		__menuC();
		__menuASelect();
		break;
	case 'D':
	case 'd':system("cls");
		__menuD();
		__menuASelect();
		break;
	case 'E':
	case 'e':system("cls");
		__menuE();
		__menuBSelect();
		break;
	case 'F':
	case 'f':system("cls");
		__menuF();
		__menuBSelect();
		break;
	case 'G':
	case 'g':system("cls");
		__menuG();
		__menuASelect();
		break;
	case 'H':
	case 'h':cout << "H" << endl;
		break;
	default:cout << "不存在改选项" << endl;
		break;
	}
}

void __menuA()
{
	getCursor(40, 5);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**********创建***********";
	getCursor(40, 6);
	cout << "**                             **";
	getCursor(40, 7);
	cout << "**";
	getCursor(42, 7);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << " A.创建学生基本信息";
	getCursor(63, 7);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**";
	getCursor(40, 8);
	cout << "**";
	getCursor(42, 8);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << " B.创建学生专业信息";
	getCursor(71, 8);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**";
	getCursor(40, 9);
	cout << "**";
	getCursor(42, 9);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << " C.创建学生成绩信息";
	getCursor(71, 9);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**";
	getCursor(40, 10);
	cout << "**";
	getCursor(42, 10);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << " D.返回";
	getCursor(71, 10);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**";
	getCursor(40, 11);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**                             **";
	getCursor(40, 12);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**************************" << endl;
}

void __menuASelect()
{
	char ch;
	getCursor(40, 14);
	cout << "请选择:";
	cin >> ch;
	switch (ch)
	{
	case 'a':
	case 'A':cout << "A" << endl;
		break;
	case 'b':
	case 'B':cout << "B" << endl;
		break;
	case 'c':
	case 'C':cout << "C" << endl;
		break;
	case 'd':
	case 'D':system("cls");
		menuSelect();
		break;
	default:cout << "不存在该选项!" << endl;
		break;
	}
}


void __menuBSelect()
{
	char ch;
	cin >> ch;
	switch (ch)
	{
	case 'a':
	case 'A':cout << "A" << endl;
		break;
	case 'b':
	case 'B':cout << "B" << endl;
		break;
	case 'c':
	case 'C':system("cls");
		menuSelect();
		break;
	default:cout << "不存在该选项!" << endl;
		break;
	}
}

void __menuB()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "*********添加*********" << endl;
	cout << "**                  **" << endl;
	cout << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "A.添加学生基本信息";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "B.添加学生专业信息";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "C.返回";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "            **" << endl;
	cout << "**********************" << endl;
	cout << "请选择：" << endl;
}



void __menuC()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "*********删除*********" << endl;
	cout << "**                  **" << endl;
	cout << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "A.删除学生基本信息";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "B.删除学生专业信息";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "C.删除学生成绩信息";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "D.返回";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "            **" << endl;
	cout << "**********************" << endl;
	cout << "请选择：" << endl;
}

void __menuD()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "*********修改*********" << endl;
	cout << "**                  **" << endl;
	cout << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "A.修改学生基本信息";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "B.修改学生专业信息";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "C.修改学生成绩信息";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "D.返回";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "            **" << endl;
	cout << "**********************" << endl;
	cout << "请选择：" << endl;
}

void __menuE()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "*********查找*********" << endl;
	cout << "**                  **" << endl;
	cout << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "A.通过姓名查找    ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "B.通过学号查找    ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "C.返回";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "            **" << endl;
	cout << "**********************" << endl;
	cout << "请选择：" << endl;
}


void __menuF()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "*********排序*********" << endl;
	cout << "**                  **" << endl;
	cout << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "A.根据学号排序    ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "B.根据总分排序    ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "C.返回";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "            **" << endl;
	cout << "**********************" << endl;
	cout << "请选择：" << endl;
}



void __menuG()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "*********查看*********" << endl;
	cout << "**                  **" << endl;
	cout << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "A.查看学生基本信息";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "B.查看学生专业信息";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "C.查看学生成绩信息";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "D.返回";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "            **" << endl;
	cout << "**********************" << endl;
	cout << "请选择：" << endl;
}

void getCursor(int x, int y)
{
	COORD pos = { x,y };
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOut, pos);
}


