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
