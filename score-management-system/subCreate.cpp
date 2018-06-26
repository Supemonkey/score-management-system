#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "mainHead.h"
#include "Subject.h"


subNode *initSub(subNode *ph, subNode *pe, subNode *pn)
{
	string subjectId;
	string subjectName;
	string stuId;
	pn = new subNode;

	//都接到设计为空节点不适用
	ph = pe = pn;
	while (1) {//输入0停止输入
		cin >> stuId;
		if (stuId == "0")break; //判断用户是否继续输入数据
		cin >> subjectName >> subjectId;
		pn = new subNode;
		pn->subLinkList = Subject(stuId, subjectName, subjectId);
		pe->next = pn;
		pe = pn;
	}
	pn = new subNode;
	pn->subLinkList = Subject();//设计一个为节点，为未使用
	pe->next = pn;
	pe = pn;
	pe->next = NULL;
	return ph;
}
