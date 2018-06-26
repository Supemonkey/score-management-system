#pragma once
#include "Student.h"
#include "Subject.h"
#include "Score.h"

typedef struct stuArray
{
	Student stuLinkList;
	stuArray *next;
}stuNode;//学生基本信息链表结点

typedef struct subArray
{
	Subject subLinkList;
	subArray *next;
}subNode;//专业课程链表结点

typedef struct scoArray
{
	Score scoLinkList;
	scoArray *next;
}scoNode;//专业成绩链表结点


stuNode *initStrt(stuNode *, stuNode *, stuNode *);
subNode *initSub(subNode *, subNode *, subNode *);
void menuUI();
void menuSelect();
void stuShow(stuNode *);
void subShow(subNode *);
