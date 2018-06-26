#pragma once
#include "Student.h"
#include "Subject.h"
#include "Score.h"

typedef struct stuArray
{
	Student stuLinkList;
	stuArray *next;
}StuNode;//ѧ��������Ϣ������

typedef struct subArray
{
	Subject subLinkList;
	subArray *next;
}subNode;//רҵ�γ�������

typedef struct scoArray
{
	Score scoLinkList;
	scoArray *next;
}scoNode;//רҵ�ɼ�������


StuNode *initStrt(StuNode *, StuNode *, StuNode *);
void menuUI();
void menuSelect();
void show(StuNode *);
