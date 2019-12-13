#pragma once
#include "Subject.h"

const int MAX = 50;

class SubjectList
{
private:
	Subject List[50];
	int num;
public:
	SubjectList();
	SubjectList(Subject sub);

	void addSubject(Subject sub);
	Subject* removeSubject(int n);
	Subject* removeSubject(string str);


	int getNum();

	void display();
};

