#pragma once
#include "Student.h"

class StudentList
{
private:
	Student* headPtr;
	int numOfStudents;

public:
	StudentList() : headPtr(0), numOfStudents(0) {}
	StudentList(Student std);

	void addStudent(Student std);

	Student* removeStudent(string str);
	int getNum();

	Student* getLastStudent();

	void display();
};

