#include "ui.h"
#include <iostream>
using namespace std;
void ui::baseui_display(){
	cout<<"欢迎来到信息管理系统!"<<endl;
	cout<<"a: 输入新的员工信息   ";
	cout<<"b: 查看当前员工信息"<<endl; 
	cout<<"c: 查看员工信息统计   ";
	cout<<"d: 查询员工信息"<<endl;
	cout<<"e: 修改指定员工信息   "; 
	cout<<"f: 删除员工信息"<<endl;
	cout<<"g: 退出员工系统"<<endl; 
}

string ui::getmessage(){
	cout<<endl;
	cout<<"请选择--->";
    string index;
    cin>>index;
    return index;
}
