#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "mainHead.h"
#include "Subject.h"


//StuNode *initStrt(StuNode *ph, StuNode *pe, StuNode *pn)
//{
//	string stuName;
//	string stuId;
//	int stuAge;
//	string stuSex;
//	pn = new StuNode;
//
//	//���ӵ����Ϊ�սڵ㲻����
//	ph = pe = pn;
//	while (1) {//����0ֹͣ����
//		cin >> stuName;
//		if (stuName == "0")break; //�ж��û��Ƿ������������
//		cin >> stuId >> stuAge >> stuSex;
//		pn = new StuNode;
//		pn->s = Student(stuName, stuId, stuAge, stuSex);
//		pe->next = pn;
//		pe = pn;
//	}
//	pn = new StuNode;
//	pn->s = Student();//���һ��Ϊ�ڵ㣬Ϊδʹ��
//	pe->next = pn;
//	pe = pn;
//	pe->next = NULL;
//	return ph;
//}
