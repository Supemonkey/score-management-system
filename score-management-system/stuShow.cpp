#include <iostream>
#include "Student.h"
#include "mainHead.h"

void show(StuNode *ph)
{
	if (ph->next != NULL) {
		ph = ph->next;//可以设置异常抛出
		cout << "|  姓名  |学号|中文|数学|英文|数据库|总分|平均分|" << endl;
		while (ph->next != NULL) {
			ph->s.showStudent();
			ph = ph->next;
		}
	}
}