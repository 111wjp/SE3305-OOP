#ifndef STUDENT_H
#define STUDENT_H

class Student
{
	public:
		void display();
		void set_value();
	protected:
		int num;
		char name[20];
		string sex;
};

#endif
