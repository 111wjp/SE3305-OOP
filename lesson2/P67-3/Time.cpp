#include <iostream>
using namespace std;

#include "Time.h"

void Time::set_time(){
	cin>>hour;
	cin>>minute;
	cin>>sec;
}

void Time::show_time(){
	cout<<"hour: "<<hour<<endl;
	cout<<"minute: "<<minute<<endl;
	cout<<"sec: "<<sec<<endl;
}
