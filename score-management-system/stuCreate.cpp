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

	//���ӵ����Ϊ�սڵ㲻����
	ph = pe = pn;
	while (1) {//����0ֹͣ����
		cin >> stuName;
		if (stuName == "0")break; //�ж��û��Ƿ������������
		cin >> stuId >> stuAge >> stuSex;
		pn = new stuNode;
		pn->stuLinkList= Student(stuName,stuId,stuAge,stuSex);
		pe->next = pn;
		pe = pn;
	}
	pn = new stuNode;
	pn->stuLinkList = Student();//���һ��Ϊ�ڵ㣬Ϊδʹ��
	pe->next = pn;
	pe = pn;
	pe->next = NULL;
	return ph;
}
