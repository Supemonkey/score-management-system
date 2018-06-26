#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "mainHead.h"
#include "Student.h"


stuNode *initStrt(stuNode *ph, stuNode *pe, stuNode *pn)
{
	string stuName;
	string stuId;
	int stuAge;
	string stuSex;
	pn = new stuNode;

	//都接到设计为空节点不适用
	ph = pe = pn;
	while (1) {//输入0停止输入
		cin >> stuName;
		if (stuName == "0")break; //判断用户是否继续输入数据
		cin >> stuId >> stuAge >> stuSex;
		pn = new stuNode;
		pn->stuLinkList= Student(stuName,stuId,stuAge,stuSex);
		pe->next = pn;
		pe = pn;
	}
	pn = new stuNode;
	pn->stuLinkList = Student();//设计一个为节点，为未使用
	pe->next = pn;
	pe = pn;
	pe->next = NULL;
	return ph;
}
