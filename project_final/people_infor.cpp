#include "people_infor.h"
#include <iostream>
using namespace std;

void people_infor::get_infor(){
    cout<<"�����빤�ţ�";
    cin>>id;
    cout<<endl;
    cout<<"������������";
    cin>>name;
    cout<<endl;
    cout<<"�������Ա�";
    cin>>sex;
    cout<<endl;
    cout<<"�����벿�ţ�";
    cin>>apart;
    cout<<endl;
    cout<<"������ְ�ƣ�";
    cin>>work;
    cout<<endl;
    cout<<"��������ְʱ�䣺";
    cin>>work_start_time;
    cout<<endl;
    cout<<"��������ϵ�绰��";
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
