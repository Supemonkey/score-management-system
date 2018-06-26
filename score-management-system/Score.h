#pragma once
#include <string>
using namespace std;

class Score
{
public:
	Score();
	~Score();
private:
	string stuid;//学生学号
	string subject;//该学生的专业
	double score;//该学生专业的分数
};

