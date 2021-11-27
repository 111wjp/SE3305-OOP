# 截图

例5.1

```c++
#include<iostream>
#include<string>
using namespace std;
class Student
{public:
void get_value()
{cin>>num>>name>>sex;}
void display()
{cout<<"num:"<<num<<endl;
cout<<"name:"<<name<<endl;
cout<<"sex:"<<sex<<endl;}
private:
	int num;
	string name;
	char sex;
};
class Student1:public Student
{public:
void get_value_1()
{cin>>age>>addr;}
void display_1()
{cout<<"age:"<<age<<endl;
cout<<"address:"<<addr<<endl;}
private:
	int age;
	string addr;
};
int main()
{Student1 stud;
stud.get_value();
stud.get_value_1();
stud.display();
stud.display_1();
return 0;
}
```

![](D:\school\se3305-OOP\lesson10\doc\eg2.png)

例5.2

```c++
#include<iostream>
#include<string>
using namespace std;
class Student
{public:
void get_value()
{cin>>num>>name>>sex;}
void display()
{cout<<"num:"<<num<<endl;
cout<<"name:"<<name<<endl;
cout<<"sex:"<<sex<<endl;}
private:
	int num;
	string name;
	char sex;
};
class Student1:private Student
{public:
void get_value_1()
{   get_value();
	cin>>age>>addr;}
void display_1()
{display();
	cout<<"age:"<<age<<endl;
cout<<"address:"<<addr<<endl;}
private:
	int age;
	string addr;
};
int main()
{Student1 stud;
stud.get_value_1();
stud.display_1();
return 0;
}
```

![](D:\school\se3305-OOP\lesson10\doc\eg2.png)

例5.3

```c++
#include<iostream>
#include<string>
using namespace std;
class Student
{public:
void get_value();
void display();
protected:
	int num;
	string name;
	char sex;
};
void Student::get_value()
{cin>>num>>name>>sex;}
void Student::display()
{cout<<"num:"<<num<<endl;
cout<<"name:"<<name<<endl;
cout<<"sex:"<<sex<<endl;}
class Student1:protected Student
{public:
void get_value1();
void display1();
private:
	int age;
	string addr;
};
void Student1::get_value1()
{get_value();
	cin>>age>>addr;
}
void Student1::display1()
{
cout<<"num:"<<num<<endl;
cout<<"name:"<<name<<endl;
cout<<"sex:"<<sex<<endl;
cout<<"age:"<<age<<endl;
cout<<"address:"<<addr<<endl;}
int main()
{Student1 stud1;
stud1.get_value1();
stud1.display1();
return 0;
}
```

![](D:\school\se3305-OOP\lesson10\doc\eg2.png)

例5.5

```c++
#include<iostream>
#include<string>
using namespace std;
class Student
{public:
	Student(int n,string nam,char s)
	{num=n;
	name=nam;
	sex=s;}
	~Student(){}
protected:
	int num;
	string name;
	char sex;
	};
	class Student1:public Student
	{public:
	Student1(int n,string nam,char s,int a,string ad):Student(n,nam,s)
	{age=a;
	addr=ad;
	}
	void show()
	{cout<<"num:"<<num<<endl;
cout<<"name:"<<name<<endl;
cout<<"sex:"<<sex<<endl;
cout<<"age:"<<age<<endl;
cout<<"address:"<<addr<<endl;}
	~Student1(){}
	private:
		int age;
		string addr;
	};
	int main()
	{Student1 stud1(10010,"Wang_Li",'f',19,"115 BeiJing Road,Shanghai");
	Student1 stud2(10011,"Zhang_fan",'m',21,"213 Shanghai Road,Beijing");
	stud1.show();
	stud2.show();
	return 0;
	}
```

![](D:\school\se3305-OOP\lesson10\doc\eg5.png)

例5.6

```c++
#include<iostream>
#include<string>
using namespace std;
class Student
{public:
	Student(int n,string nam)
	{num=n;
	name=nam;}
	void display()
	{cout<<"num:"<<num<<endl<<"name:"<<name<<endl;}
protected:
	int num;
	string name;
};
class Student1:public Student
{
public:
	Student1(int n,string nam,int n1,string nam1,int a,string ad):Student(n,nam),monitor(n1,nam1)
	{age=a;
	addr=ad;}
	void show()
	{cout<<"This student is:"<<endl;
	display();
	cout<<"age:"<<age<<endl;
	cout<<"address:"<<addr<<endl<<endl;}
	void show_monitor()
	{cout<<endl<<"Class monitor is:"<<endl;
	monitor.display();
	}
private:
	Student monitor;
	int age;
	string addr;
};
int main()
{Student1 stud1(10010,"Wang_Li",10001,"Li_jun",19,"115 Beijing Road,Shanghai");
stud1.show();
stud1.show_monitor();
return 0;
}
	
```

![](D:\school\se3305-OOP\lesson10\doc\eg6.png)

例5.7

```c++
#include<iostream>
#include<string>
using namespace std;
class Student
{public:
	Student(int n,string nam)
	{num=n;
	name=nam;}
	void display()
	{cout<<"num:"<<num<<endl<<"name:"<<name<<endl;}
protected:
	int num;
	string name;
};
class Student1:public Student
{
public:
	Student1(int n,string nam,int a):Student(n,nam)
	{age=a;}
	void show()
	{display();
	cout<<"age:"<<age<<endl;}
private:
	int age;
};
	class Student2:public Student1
	{public:
	Student2(int n,string nam,int a,int s):Student1(n,nam,a)
	{score=s;}
	void show_all()
	{show();
	cout<<"score"<<score<<endl;}
	private:
		int score;
	};
int main()
{Student2 stud(10010,"Li",17,89);
stud.show_all();
return 0;
}
	
```

![](D:\school\se3305-OOP\lesson10\doc\eg7.png)

例5.8

```c++
#include<iostream>
#include<string>
using namespace std;
class Teacher
{
public:
	Teacher(string nam,int a,string t)
	{
		name = nam;
		age = a;
		title =t;
	}
	void display()
	{
		cout<<"name: "<<name<<endl;
		cout<<"age: "<<age<<endl;
		cout<<"title: "<<title<<endl;
	}
protected:
	string name;
	int age;
	string title;
};

class Student
{
public:
	Student(string nam,char s,float sco)
	{
		name1 = nam;
		sex = s;
		score = sco;
	}
	void display1()
	{
		cout<<"name: "<<name1<<endl;
		cout<<"sex: "<<sex<<endl;
		cout<<"score: "<<score<<endl;
	}
protected:
	string name1;
	char sex;
	float score;
};

class Graduate:public Teacher,public Student
{
public:
	Graduate(string nam,int a,char s,string t,float sco,float w):Teacher(nam,a,t),Student(nam,s,sco),wage(w){}
	void show()
	{
		cout<<"name: "<<name<<endl;
		cout<<"age: "<<age<<endl;
		cout<<"sex: "<<sex<<endl;
		cout<<"score: "<<score<<endl;
		cout<<"title: "<<title<<endl;
		cout<<"wage: "<<wage<<endl;
	}
private:
	float wage;
};
int main()
{
	Graduate grad1("Wang_li",24,'f',"assistant",89.5,2400);
	grad1.show();
	return 0;
}

```

![](D:\school\se3305-OOP\lesson10\doc\eg8.png)

习题8

```c++
#include <iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"constructing A"<<endl;
		}
		~A(){
			cout<<"destructing A"<<endl;
		}
};

class B:public A{
	public:
		B(){
			cout<<"constructing B"<<endl;
		}
		~B(){
			cout<<"destructing B"<<endl;
		}
};

class C:public B{
	public:
		C(){
			cout<<"constructing C"<<endl;
		}
		~C(){
			cout<<"destructing C"<<endl;
		}
};

int main(){
	C c1;
	return 0;
}
```

![](D:\school\se3305-OOP\lesson10\doc\8.png)

习题9

```c++
#include <iostream>
#include <string>
using namespace std;
class Teacher{
public:
    Teacher(string nam,int a,char s,string tit,string ad,string t){
        name = nam;
        age = a;
        sex = s;
        title = tit;
        addr = ad;
        tel = t;
    }
    void display(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"sex:"<<sex<<endl;
        cout<<"title:"<<title<<endl;
        cout<<"address:"<<addr<<endl;
        cout<<"tel:"<<tel<<endl;
    }
protected:
    string name;
    int age;
    char sex;
    string title;
    string addr;
    string tel;
};

class Cadre{
public:
    Cadre(string nam,int a,char s,string p,string ad,string t){
        name = nam;
        age = a;
        sex = s;
        post = p;
        addr = ad;
        tel = t;
    }
    void display(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"sex:"<<sex<<endl;
        cout<<"post:"<<post<<endl;
        cout<<"address:"<<addr<<endl;
        cout<<"tel:"<<tel<<endl;
    }
protected:
    string name;
    int age;
    char sex;
    string post;
    string addr;
    string tel;
};

class Person:public Teacher,public Cadre{
public:
    Person(string nam,int a,char s,string tit,string p,string ad,string t,float w):Teacher(nam,a,s,tit,ad,t),Cadre(nam,a,s,p,ad,t),wage(w){
    }
    void show(){
        Cadre::display();
        cout<<"wage:"<<wage<<endl;
    }
protected:
    string name;
    int age;
    char sex;
    string title;
    string post;
    string addr;
    string tel;
    float wage;
};

int main(){
    Person person1("zhang",19,'m',"asd","124325","Zhengzhou,Henan","1233445667",1534.5);
    person1.show();
    return 0;
}
```

![](D:\school\se3305-OOP\lesson10\doc\9.png)

习题10

```c++
#include <iostream>
#include <cstring>
using namespace std;
class Teacher{
public:
    Teacher(int n,char nam[],char s){
        num = n;
        strcpy(name,nam);
        sex = s;
    }
    void display(){
        cout<<"num:"<<num<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"sex:"<<sex<<endl;
    }
private:
    int num;
    char name[20];
    char sex;
};

class BirthDate{
public:
    BirthDate(int y,int m,int d){
        year = y;
        month = m;
        day = d;
    }
    void display(){
        cout<<"birthday:"<<month<<"/"<<day<<"/"<<year<<endl;
    }
    void change(int y,int m,int d){
        year = y;
        month = m;
        day = d;
    }
private:
    int year;
    int month;
    int day;
};

class Professor:public Teacher{
public:
    Professor(int n,char nam[],char s,int y,int m,int d,float a):Teacher(n,nam,s),birthday(y,m,d){
        area = a;
    }
    void display(){
        Teacher::display();
        birthday.display();
        cout<<"area:"<<area<<endl;
    }
    void change(int y,int m,int d){
        birthday.change(y,m,d);
    }
private:
    float area;
    BirthDate birthday;
};

int main(){
    Professor prof(3012,"zhang",'f',1949,10,1,123.5);
    prof.display();
    prof.change(1950,6,1);
    prof.display();
    return 0;
}
```

![](D:\school\se3305-OOP\lesson10\doc\10.png)

http:\/\/upos-hz-mirrorks3u.acgvideo.com\/upgcxcode\/93\/11\/86881193\/86881193-1-6.mp4?e=ig8euxZM2rNcNbug7WdVtWug7WdVNEVEuCIv29hEn0l5QK==&deadline=1555647031&gen=playurl&nbs=1&oi=3742041866&os=ks3u&platform=html5&trid=812e5d046a8a4213bf3119bdf184f128&uipk=5&upsig=97ec92a9612234c4c4ce7b29e27d5ef4&uparams=e,deadline,gen,nbs,oi,os,platform,trid,uipk
————————————————
版权声明：本文为CSDN博主「ucsheep」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/ucsheep/article/details/89394700