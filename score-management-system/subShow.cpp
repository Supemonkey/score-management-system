#include <iostream>
#include "Subject.h"
#include "mainHead.h"

void subShow(subNode *ph)
{
	if (ph->next != NULL) {
		ph = ph->next;
		cout << "|ѧ��|רҵ����|רҵ��|" << endl;
		while (ph->next != NULL) {
			ph->subLinkList.showSubject();
			ph = ph->next;
		}
	}
}
