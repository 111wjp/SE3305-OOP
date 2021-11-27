#include "Student.h"

Student::Student(string n,int si,int s)
{
	name =n;
	student_id = si;
	score = s;
}

Student::~Student()
{
}

void Student::display(){
	cout<<name<<" "<<student_id<<" "<<score;
}
