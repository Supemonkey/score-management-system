#pragma once
#include "Student.h"
#include "Subject.h"
#include "Score.h"

typedef struct stuArray
{
	Student stuLinkList;
	stuArray *next;
}stuNode;//ѧ��������Ϣ������

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


stuNode *initStrt(stuNode *, stuNode *, stuNode *);
subNode *initSub(subNode *, subNode *, subNode *);
void menuUI();
void menuSelect();
void stuShow(stuNode *);
void subShow(subNode *);
