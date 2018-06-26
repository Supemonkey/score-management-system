#include "Subject.h"
#include <iostream>
using namespace std;
#define UNUSED -404



Subject::Subject()
{
	this->stuId = UNUSED;
	this->subjectName = UNUSED;
	this->subjectId = UNUSED;
}

Subject::Subject(string stuId, string subjectName, string subJectId)
{
	this->stuId = stuId;
	this->subjectName = subjectName;
	this->subjectId = subjectId;
}


Subject::~Subject()
{
}

void Subject::showSubject()
{
	cout << "|" << stuId << "|"
		<< subjectName << "|" 
		<< subjectId << endl;
}
