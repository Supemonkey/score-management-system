#include <iostream>
#include "Subject.h"
#include "mainHead.h"

void subShow(subNode *ph)
{
	if (ph->next != NULL) {
		ph = ph->next;
		cout << "|学号|专业名称|专业号|" << endl;
		while (ph->next != NULL) {
			ph->subLinkList.showSubject();
			ph = ph->next;
		}
	}
}
