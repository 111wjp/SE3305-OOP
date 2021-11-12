#include <iostream>
using namespace std;
class Student{
	public:
		Student(int n,float s){
			num = n;
			score = s;
		}
		void total();
		static float average();
	private:
		int num;
		float score;
		static float sum;
		static int count;
};

void Student::total(){
	sum+=score;
	count++;
}

float Student::average(){
	return (sum/count);
}

float Student::sum = 0;
int Student::count = 0;

int main(){
	Student stud[5] = {
		Student(01,70),
		Student(02,45),
		Student(03,78),
		Student(04,98),
		Student(05,56)
	};
	int n;
	cout<<"please input the num of students:";
	cin>>n;
	for(int i = 0;i < n;i++)
		stud[i].total();
	cout<<"the average score of "<<n<<" students is "<<Student::average()<<endl;
	return 0;
}
