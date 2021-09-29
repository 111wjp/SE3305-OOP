#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Time{
	public:
		void set_time();
		void show_time();
	protected:
		int hour;
		int minute;
		int sec;
};


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

int main(int argc, char** argv) {
	Time t1;
	t1.set_time();
	t1.show_time();
	
	return 0;
}

