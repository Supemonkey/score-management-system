#pragma once
#include "Student.h"

typedef struct array
{
	Student s;
	array *next;
}Node;

Node *initStrt(Node *, Node *, Node *);
void menuUI();
void menuSelect();
