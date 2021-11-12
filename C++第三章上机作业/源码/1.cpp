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
		private:
			int student_id;
			string name;
			int score;
};

int main(){
	Student std[5] = {
		Student(1,"name1",98),
		Student(2,"name2",95),
		Student(3,"name3",90),
		Student(4,"name4",87),
		Student(5,"name5",60),
	};
	for(int i = 0;i < 5;i = i + 2){
		std[i].display();
	}
	return 0;
}
