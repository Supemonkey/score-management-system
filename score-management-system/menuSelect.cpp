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


void __menuG();
void menuUI()
{

	time_t t = time(0);
	char tmp[64];
	strftime(tmp, sizeof(tmp), "%Y/%m/%d %X %A", localtime(&t));
	puts(tmp);
	//getCursor(x, y);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "*********�ɼ�����ϵͳ**********" << endl;
	cout << "**                           **" << endl;
	cout << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "A.����               E.����";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl;
	cout << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "B.���               F.����";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl;
	cout << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "C.ɾ��               G.�鿴";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl;
	cout << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "D.�޸�               H.����";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "*******************************" << endl;
}



void menuSelect()
{
	char ch;
	cout << "��ѡ��" << endl;
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
		__menuASelect();
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
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "*********����*********" << endl;
	cout << "**                  **" << endl;
	cout << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "A.����ѧ��������Ϣ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "B.����ѧ��רҵ��Ϣ"; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl << "**";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << "C.����ѧ���ɼ���Ϣ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "**" << endl;
	cout << "**********************"<<endl;
	cout << "��ѡ��" << endl;
}

void __menuASelect()
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
	case 'C':cout << "C" << endl;
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
	cout << "**" << endl
		<< "**********************" << endl;
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
	cout << "**" << endl;
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
	cout << "**" << endl;
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
	cout << "**" << endl
		<< "**********************" << endl;
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
	cout << "**" << endl
		<< "**********************" << endl;
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
	cout << "**" << endl;
	cout << "**********************" << endl;
	cout << "��ѡ��" << endl;
}

