#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "mainHead.h"


subNode *initSub(subNode *ph, subNode *pe, subNode *pn)
{
	string subjectId;
	string subjectName;
	string stuSubId;
	pn = new subNode;

	//���ӵ����Ϊ�սڵ㲻����
	ph = pe = pn;
	while (1) {//����0ֹͣ����
		cin >> stuSubId;
		if (stuSubId == "0")break; //�ж��û��Ƿ������������
		cin >> subjectName >> subjectId;
		pn = new subNode;
		pn->subLinkList = Subject(stuSubId, subjectName, subjectId);
		pe->next = pn;
		pe = pn;
	}
	pn = new subNode;
	pn->subLinkList = Subject();//���һ��Ϊ�ڵ㣬Ϊδʹ��
	pe->next = pn;
	pe = pn;
	pe->next = NULL;
	return ph;
}
