//2����дһ������ʵ�����8��ѧ����Ϣ��ѧ�ţ��ɼ�����ż��������Ӧ��ѧ����Ϣ�����ö���������ʵ�֣�
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
