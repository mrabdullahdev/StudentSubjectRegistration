#pragma once
#include <iostream>
#include <string>
using namespace std;

class Subject
{
private:
	string name;
public:
	Subject* pre, * post;

	Subject() : name(""), pre(0), post(0) {}
	Subject(string str);
	Subject(string str, Subject* preSub, Subject* postSub);

	void setName(string str);
	string getName();

	void display();
};

