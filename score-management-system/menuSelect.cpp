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
	
	cout <<"**********�ɼ�����ϵͳ***********" ;
	getCursor(40,6);
	cout << "**                             **";
	getCursor(40, 7);
	cout << "**";
	getCursor(42, 7);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << " A.����               E.���� ";
	getCursor(71, 7);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**";
	getCursor(40, 8);
	cout << "**";
	getCursor(42, 8);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << " B.���               F.���� ";
	getCursor(71, 8);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**";
	getCursor(40, 9);
	cout << "**";
	getCursor(42, 9);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << " C.ɾ��               G.�鿴 ";
	getCursor(71,9);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**";
	getCursor(40, 10);
	cout << "**";
	getCursor(42, 10);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << " D.�޸�               H.���� ";
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
	cout << "��ѡ��";
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
	default:cout << "�����ڸ�ѡ��" << endl;
		break;
	}
}

void __menuA()
{
	getCursor(40, 5);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**********����***********";
	getCursor(40, 6);
	cout << "**                             **";
	getCursor(40, 7);
	cout << "**";
	getCursor(42, 7);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << " A.����ѧ��������Ϣ";
	getCursor(63, 7);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**";
	getCursor(40, 8);
	cout << "**";
	getCursor(42, 8);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << " B.����ѧ��רҵ��Ϣ";
	getCursor(71, 8);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**";
	getCursor(40, 9);
	cout << "**";
	getCursor(42, 9);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << " C.����ѧ���ɼ���Ϣ";
	getCursor(71, 9);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**";
	getCursor(40, 10);
	cout << "**";
	getCursor(42, 10);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << " D.����";
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
	cout << "��ѡ��:";
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
	default:cout << "�����ڸ�ѡ��!" << endl;
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
	default:cout << "�����ڸ�ѡ��!" << endl;
		break;
	}
}

void __menuB()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "*********���*********" << endl;
	cout << "**                  **" << endl;
	cout << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "A.���ѧ��������Ϣ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "B.���ѧ��רҵ��Ϣ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "C.����";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "            **" << endl;
	cout << "**********************" << endl;
	cout << "��ѡ��" << endl;
}



void __menuC()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "*********ɾ��*********" << endl;
	cout << "**                  **" << endl;
	cout << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "A.ɾ��ѧ��������Ϣ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "B.ɾ��ѧ��רҵ��Ϣ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "C.ɾ��ѧ���ɼ���Ϣ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "D.����";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "            **" << endl;
	cout << "**********************" << endl;
	cout << "��ѡ��" << endl;
}

void __menuD()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "*********�޸�*********" << endl;
	cout << "**                  **" << endl;
	cout << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "A.�޸�ѧ��������Ϣ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "B.�޸�ѧ��רҵ��Ϣ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "C.�޸�ѧ���ɼ���Ϣ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "D.����";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "            **" << endl;
	cout << "**********************" << endl;
	cout << "��ѡ��" << endl;
}

void __menuE()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "*********����*********" << endl;
	cout << "**                  **" << endl;
	cout << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "A.ͨ����������    ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "B.ͨ��ѧ�Ų���    ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "C.����";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "            **" << endl;
	cout << "**********************" << endl;
	cout << "��ѡ��" << endl;
}


void __menuF()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "*********����*********" << endl;
	cout << "**                  **" << endl;
	cout << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "A.����ѧ������    ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "B.�����ܷ�����    ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "C.����";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "            **" << endl;
	cout << "**********************" << endl;
	cout << "��ѡ��" << endl;
}



void __menuG()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "*********�鿴*********" << endl;
	cout << "**                  **" << endl;
	cout << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "A.�鿴ѧ��������Ϣ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "B.�鿴ѧ��רҵ��Ϣ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "C.�鿴ѧ���ɼ���Ϣ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "D.����";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "            **" << endl;
	cout << "**********************" << endl;
	cout << "��ѡ��" << endl;
}

void getCursor(int x, int y)
{
	COORD pos = { x,y };
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOut, pos);
}


