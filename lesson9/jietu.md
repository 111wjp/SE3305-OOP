# 截图

1.

```c++
#include<iostream>
#include <string.h>
using namespace std;
class Student{
	public:
		void get_value(){
			cin>>num>>name>>sex;
		}
		void display(){
			cout<<"num: "<<num<<endl;
			cout<<"name: "<<name<<endl;
			cout<<"sex: "<<sex<<endl;
		}
	private:
		int num;
		string name;
		char sex;
}; 
class Student1:public Student{
	public:
		void get_value_1(){
			cin>>age>>addr;
		}
		void display_1(){
			cout<<"age: "<<age<<endl;
			cout<<"address: "<<addr<<endl;
		}
	private:
		int age;
		string addr;
};

int main(){
	Student1 stud1;
	stud1.get_value();
	stud1.get_value_1();
	stud1.display();
	stud1.display_1();
	return 0;
}
```



![](D:\school\se3305-OOP\lesson9\p198_1.png)

2.

```c++
#include <iostream>
#include <string>
using namespace std;
class Student{
	public:
		void get_value(){
			cin>>num>>name>>sex;
		}
		void display(){
			cout<<"num: "<<num<<endl;
			cout<<"name: "<<name<<endl;
			cout<<"sex: "<<sex<<endl;
		}
	private:
		int num;
		string name;
		char sex;
}; 
class Student1:private Student{
	public:
		void get_value_1(){
			cin>>num>>name>>age>>sex;
		}
		void display_1(){
			cout<<"age: "<<age<<endl;
			cout<<"address:"<<addr<<endl;
		}
	private:
		int age;
		string addr;
};

int main(){
	Student1 stud1;
	stud1.get_value();
	stud1.get_value_1();
	stud1.display();
	stud1.display_1();
	return 0;
}
```



![](D:\school\se3305-OOP\lesson9\p198_1.png)

3.

```c++
#include <iostream>
#include <string>
using namespace std;

class Student{
	public:
	protected:
		int num;
		string name;
		char sex;
};

class Student1:protected Student{
	public:
		void get_value1();
		void display1();
	private:
		int age;
		string addr;
};

void Student1::get_value1(){
	cin>>num>>name>>sex;
	cin>>age>>addr;
}

void Student1::display1(){
		cout<<"num: "<<num<<endl;
		cout<<"name: "<<name<<endl;
		cout<<"sex: "<<sex<<endl;
		cout<<"age: "<<age<<endl;
		cout<<"address: "<<addr<<endl;
}
int main(){
	Student1 stud1;
	stud1.get_value1();
	stud1.display1();
	return 0;
}
```



![](D:\school\se3305-OOP\lesson9\p198_1.png)

4.

```c++
#include<iostream>
#include <string.h>
using namespace std;
class Student{
	public:
		void get_value(){
			cin>>num>>name>>sex;
		}
		void display(){
			cout<<"num: "<<num<<endl;
			cout<<"name: "<<name<<endl;
			cout<<"sex: "<<sex<<endl;
		}
	private:
		int num;
		string name;
		char sex;
}; 
class Student1:public Student{
	public:
		void get_value_1(){
			cin>>age>>addr;
		}
		void display_1(){
			cout<<"age: "<<age<<endl;
			cout<<"address: "<<addr<<endl;
		}
	private:
		int age;
		string addr;
};

int main(){
	Student1 stud1;
	stud1.get_value();
	stud1.get_value_1();
	stud1.display();
	stud1.display_1();
	return 0;
}
```



![](D:\school\se3305-OOP\lesson9\p198_1.png)

7.

```c++
//7
#include <iostream>
#include <string>
using namespace std;
class A{
	public:
		A(){
			a = 0;
			b = 0;
		}
		A(int i){
			a = i;
			b = 0;
		}
		A(int i,int j){
			a = i;
			b = j;
		}
		void display(){
			cout<<"a = "<<a<<"b = "<<b;
		}
	private:
		int a;
		int b;
};

class B:public A{
	public:
		B(){
			c = 0;
		}
		B(int i):A(i){
			c = 0;
		}
		B(int i,int j):A(i,j){
			c = 0;
		}
		B(int i,int j,int k):A(i,j){
			c = k;
		}
		void display1(){
			cout<<"c = "<<c<<endl;
		}
	private:
		int c;
};

int main(){
	B b1;
	B b2(1);
	B b3(1,3);
	B b4(1,3,5);
	b1.display1();
	b2.display1();
	b3.display1();
	b4.display1();
	return 0;
}
```



![](D:\school\se3305-OOP\lesson9\p198_7.png)