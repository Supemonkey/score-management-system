#include <iostream>
#include "Student.h"
#include "mainHead.h"

void show(StuNode *ph)
{
	if (ph->next != NULL) {
		ph = ph->next;//���������쳣�׳�
		cout << "|  ����  |ѧ��|����|��ѧ|Ӣ��|���ݿ�|�ܷ�|ƽ����|" << endl;
		while (ph->next != NULL) {
			ph->s.showStudent();
			ph = ph->next;
		}
	}
}