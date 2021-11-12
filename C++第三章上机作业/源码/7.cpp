#include <iostream>
using namespace std;
class Time{
	public:
		Time(int h,int m,int s){
			hour = h;
			minute = m;
			sec = s;	
		}
		int hour;
		int minute;
		int sec;
};

int main(){
	Time t1(2021,10,28);
	Time *p = &t1;
	cout<<p->hour<<":"<<p->minute<<":"<<p->sec<<endl;
	return 0;
}
