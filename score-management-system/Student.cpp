#include "Student.h"
#include <iostream>
#include <iomanip>
using namespace std;
#define UNUSED -404


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
	cout << "|"<<setw(8)<<left<<stuName
		<< "|"<<setw(4)<< stuId 
		<< "|"<<setw(4)<< stuAge 
		<< "|"<< setw(4)<<stuSex
		<<"|"<< endl;
}


Student::Student()
{
	this->stuName = UNUSED;
	this->stuId = UNUSED;
	this->stuAge = UNUSED;
	this->stuSex = UNUSED;
}