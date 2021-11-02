//2、编写一个程序，实现输出8个学生信息（学号，成绩）中偶数个数对应的学生信息。（用对象数组来实现）
#include <iostream>
using namespace std;
class Student{
	public:
		Student(int si = 0,int s = 0){
			student_id = si;
			score = s;
		};
		void display();
	private:
		int student_id;
		int score;
};

void Student::display(){
	cout<<"score:"<<score<<endl;
}

int main(){
	Student stud[8]={
		Student(1,34),
		Student(2,23),
		Student(3,89),
		Student(4,78),
		Student(5,45),
		Student(6,67),
		Student(7,98),
		Student(8,47)
	};
	for(int i = 0;i < 8;i = i + 2){
		stud[i].display();
		cout<<endl;
	}
}
