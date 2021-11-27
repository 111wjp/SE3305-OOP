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
