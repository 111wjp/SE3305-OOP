#include "people_infor.h"
#include <iostream>
using namespace std;

void people_infor::get_infor(){
    cout<<"请输入工号：";
    cin>>id;
    cout<<endl;
    cout<<"请输入姓名：";
    cin>>name;
    cout<<endl;
    cout<<"请输入性别：";
    cin>>sex;
    cout<<endl;
    cout<<"请输入部门：";
    cin>>apart;
    cout<<endl;
    cout<<"请输入职称：";
    cin>>work;
    cout<<endl;
    cout<<"请输入入职时间：";
    cin>>work_start_time;
    cout<<endl;
    cout<<"请输入联系电话：";
    cin>>tel;
    cout<<endl;
}

void people_infor::put_infor(){
    cout<<id<<endl;
    cout<<name<<endl;
    cout<<sex<<endl;
    cout<<apart<<endl;
    cout<<work<<endl;
    cout<<work_start_time<<endl;
    cout<<tel<<endl;
    cout<<endl;
}

void people_infor::put_id(){
	cout<<id;
}

void people_infor::put_name(){
	cout<<name;
}
