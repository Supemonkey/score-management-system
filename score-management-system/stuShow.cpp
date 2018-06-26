#include <iostream>
#include "Student.h"
#include "mainHead.h"

void show(StuNode *ph)
{
	if (ph->next != NULL) {
		ph = ph->next;//可以设置异常抛出
		cout << "|  姓名  |学号|年龄|性别|" << endl;
		while (ph->next != NULL) {
			ph->stuLinkList.showStudent();
			ph = ph->next;
		}
	}
}