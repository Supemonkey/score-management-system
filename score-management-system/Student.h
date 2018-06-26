#pragma once
#include <string>
using namespace std;

class Student
{
public:
	Student();
	Student(string,string,int ,string);
	~Student();
	void showStudent();
private:
	string stuName;
	string stuId;
	int stuAge;
	string stuSex;
};

