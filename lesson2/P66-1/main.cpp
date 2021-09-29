#include <iostream>
using namespace std;

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

int main(){
	Time t;
	t.set_time();
	t.show_time();
	
	return 0;
}
