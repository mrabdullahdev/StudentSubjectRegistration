#pragma once

#include "SubjectList.h"
class Student
{
private:
	string name;
	SubjectList regSubjects;
	int agr;
public:
	Student* next;

	Student(): name(""), regSubjects(), agr(0), next(0) {}
	Student(string str, int percentage);

	void setName(string str);
	void setAggregate(float matric,float inter, float entryTest);
	//void setAggregate(int percentage);

	void registerSubject(Subject sub);

	Subject* unRegisterSubject(string str);
	int getAggregate();
	string getName();

	void display();

};

