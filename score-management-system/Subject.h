#pragma once
#include <string>
using namespace std;

class Subject
{
public:
	Subject();
	Subject(string ,string ,string );
	~Subject();
	void showSubject();
private:
	string subjectId;
	string subjectName;
	string stuId;
};

