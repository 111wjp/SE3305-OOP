#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include "people_infor.h"
#include "ui.h"
#include <windows.h>
int main(int argc, char** argv) {
	ui base_ui;
	int peo_num = 0;
	people_infor peo[100];
	base_ui.baseui_display();
	while(1){
		if(base_ui.getmessage() == "a"){
			peo[peo_num].get_infor();
			peo_num++;
			cout<<":)录入完成!"<<endl;
		}
		if(base_ui.getmessage() == "b"){
			for(int i = 0; i < peo_num; i++){
				peo[i].put_infor();
			}
			if(peo_num < 0){
				cout<<"无任何数据"<<endl;
			}
		}
		if(base_ui.getmessage() == "c")	{
			cout<<"共计"<<peo_num<<endl;
			for(int i = 0; i < peo_num; i++){
				peo[i].put_id();
				cout<<"     ";
				peo[i].put_name();
				cout<<endl;
			}
		}
		if(base_ui.getmessage() == "d"){
			cout<<endl;
			cout<<"输入查找员工的序号--->";
			int wait_num;
			cin>>wait_num;
			peo[wait_num-1].put_infor();
		}
		if(base_ui.getmessage() == "e"){
			cout<<endl;
			cout<<"选择要修改的员工工号:";
			int wait_num;
			cin>>wait_num;
			peo[wait_num-1].get_infor();
		}
		if(base_ui.getmessage() == "f"){
			
		}
		if(base_ui.getmessage() == "g"){
			
		}
	}

	
	return 0;
}
