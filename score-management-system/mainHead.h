#pragma once
#include "Student.h"
#include "Subject.h"
#include "Score.h"

typedef struct stuArray
{
	Student stuLinkList;
	stuArray *next;
}StuNode;//学生基本信息链表结点

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


StuNode *initStrt(StuNode *, StuNode *, StuNode *);
void menuUI();
void menuSelect();
void show(StuNode *);
