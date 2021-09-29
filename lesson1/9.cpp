#include <iostream>
using namespace std;

void sort(int &num1,int &num2){
	int num_mid;
	if(num1 < num2){
		num_mid = num1;
		num1 = num2;
		num2 = num_mid;
	}
}

void sort(int &num1,int &num2,int &num3){
	if(num1>num2){
		if(num2<num3){
			sort(num2,num3);
			if(num2>num1)
				sort(num1,num2);
		}
	}else{
		if(num1<num3){
			sort(num1,num3);
			if(num2 > num1)
				sort(num1,num2);
		}
	}
}

int main(){
	int num1,num2,num3;
	cin>>num1>>num2>>num3;
	sort(num1,num2,num3);
	cout<<num1<<" "<<num2<<" "<<num3;
	
	return 0;
}
