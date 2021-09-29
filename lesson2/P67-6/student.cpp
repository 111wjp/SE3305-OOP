#include <iostream>
#include <string>
using namespace std;
#include "student.h"

void Student::display(){
	cout<<"num: "<<num<<endl;
	cout<<"name: "<<name<<endl;
	cout<<"sex: "<<sex<<endl;
}

void Student::set_value(){
	cin>>num;
	cin>>name;
	cin>>sex;
}
