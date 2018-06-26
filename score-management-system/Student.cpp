#include "Student.h"
#define UNUSED -404
#include <iostream>
using namespace std;


Student::Student(string stuName, string stuId, int stuAge, string stuSex)
{
	this->stuName = stuName;
	this->stuId = stuId;
	this->stuAge = stuAge;
	this->stuSex = stuSex;
}

Student::~Student()
{
}

void Student::showStudent()
{
	cout << stuName << " "
		<< stuId << " "
		<< stuAge << " "
		<< stuSex << endl;
}


Student::Student()
{
	this->stuName = UNUSED;
	this->stuId = UNUSED;
	this->stuAge = UNUSED;
	this->stuSex = UNUSED;
}