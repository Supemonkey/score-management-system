#include <iostream>
#include "Student.h"
#include "mainHead.h"

void show(StuNode *ph)
{
	if (ph->next != NULL) {
		ph = ph->next;//���������쳣�׳�
		cout << "|  ����  |ѧ��|����|�Ա�|" << endl;
		while (ph->next != NULL) {
			ph->stuLinkList.showStudent();
			ph = ph->next;
		}
	}
}