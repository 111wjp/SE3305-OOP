//3����дһ���������6��ѧ����Ϣ��ѧ�š��ɼ����гɼ���ߵ�ѧ����ѧ�š����ö��������ָ������ָ�룩
#include <iostream>
using namespace std;
class Student{
	public:
		Student(int si,int s){
			student_id = si;
			score = s;
		}
		void display();
		int student_id;
		int score;
};

void Student::display(){
	cout<<"id:"<<student_id<<"  score:"<<score<<endl;
}



int main(){
	Student stud[6] = {
		Student(1,25),
		Student(2,23),
		Student(3,65),
		Student(4,34),
		Student(5,21),
		Student(6,67)
	};
	int max = 0;
	Student *p = &stud[max];
	for(int i = 0;i < 5;i ++){
		if(p->score < stud[i+1].score)
			max = i + 1;
	}
	p = &stud[max];
	cout<<p->score;
}
