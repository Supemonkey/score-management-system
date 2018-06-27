#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "mainHead.h"
#include <Windows.h>
using namespace std;


int main()
{
	SetConsoleTitle("成绩管理系统");
	//StuNode *stuPhead, *stuPend, *stuPnew;
	//stuPhead = stuPend = stuPnew = NULL;
	//stuPhead = initStrt(stuPhead,stuPend,stuPnew);
	//stuShow(stuPhead);
	//menuUI();
	//menuSelect();
	subNode *subPhead, *subPend, *subPnew;
	subPhead = subPend = subPnew = NULL;
	subPhead = initSub(subPhead,subPend,subPnew);
	subShow(subPhead);

	system("pause");
	return 0;
}