#include "ui.h"
#include <iostream>
using namespace std;
void ui::baseui_display(){
	cout<<"��ӭ������Ϣ����ϵͳ!"<<endl;
	cout<<"a: �����µ�Ա����Ϣ   ";
	cout<<"b: �鿴��ǰԱ����Ϣ"<<endl; 
	cout<<"c: �鿴Ա����Ϣͳ��   ";
	cout<<"d: ��ѯԱ����Ϣ"<<endl;
	cout<<"e: �޸�ָ��Ա����Ϣ   "; 
	cout<<"f: ɾ��Ա����Ϣ"<<endl;
	cout<<"g: �˳�Ա��ϵͳ"<<endl; 
}

string ui::getmessage(){
	cout<<endl;
	cout<<"��ѡ��--->";
    string index;
    cin>>index;
    return index;
}
