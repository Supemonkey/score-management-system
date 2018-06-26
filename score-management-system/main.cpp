#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "mainHead.h"
using namespace std;


int main()
{
	StuNode s;
	StuNode *phead, *pend, *pnew;
	phead = pend = pnew = NULL;
	phead = initStrt(phead,pend,pnew);
	show(phead);
	//menuUI();
	//menuSelect();
	system("pause");
	return 0;
}