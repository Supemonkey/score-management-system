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

	//���ӵ����Ϊ�սڵ㲻����
	ph = pe = pn;
	while (1) {//����0ֹͣ����
		cin >> stuId;
		if (stuId == "0")break; //�ж��û��Ƿ������������
		cin >> subjectName >> subjectId;
		pn = new subNode;
		pn->subLinkList = Subject(stuId, subjectName, subjectId);
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
