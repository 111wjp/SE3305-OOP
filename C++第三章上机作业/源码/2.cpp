#include <iostream>
#include <string>
using namespace std;
class Student{
	public:
		Student(int si,string n,int s){
			student_id = si;
			name = n;
			score = s;
		}
		void display(){
			cout<<"student_id:"<<student_id<<" ";
			cout<<"name:"<<name<<" ";
			cout<<"score:"<<score<<endl;
		}
		void display_id(){
			cout<<"student_id:"<<student_id<<" ";
		}
		int student_id;
		string name;
		int score;
};


int main(){
	Student stu[7] = {
		Student(1,"name1",98),
		Student(2,"name2",95),
		Student(3,"name3",90),
		Student(4,"name4",87),
		Student(5,"name5",60),
		Student(6,"name6",64),
		Student(7,"name7",38),
	};
	int max = 0;
	Student *p = &stu[0];
	for(int i = 0;i < 8;i++){
		if(stu[i].score > stu[max].score)
			max = i;
	}
	p = &stu[max];
	p->display_id();
	return 0;
}
