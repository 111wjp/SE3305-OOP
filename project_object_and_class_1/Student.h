#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;
class Student
{
	public:
		Student(string n,int si,int s);
		~Student();
		void display();
	private:
		string name;
		int student_id;
		int score;
};

#endif
