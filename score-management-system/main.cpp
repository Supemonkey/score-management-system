#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "mainHead.h"
using namespace std;


int main()
{
	Node s;
	Node *phead, *pend, *pnew;
	phead = pend = pnew = NULL;
	menuUI();
	menuSelect();
	system("pause");
	return 0;
}