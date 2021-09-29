#include <iostream>
using namespace std;
int IntMax(int num1,int num2,int num3);
int IntMax(int num1,int num2);

int main(){
	int num1,num2,num3;
	cin>>num1>>num2>>num3;
	cout<<IntMax(num1,num2,num3)<<endl;
	cin>>num1>>num2;
	cout<<IntMax(num1,num2);
	
	return 0;
}

int IntMax(int num1,int num2,int num3){
	if(num1>num2){
		if(num1 > num3)
			return num1;
		else
			return num3;
	}else{
		if(num2 > num3)
			return num2;
		else 
			return num3;
	}
}

int IntMax(int num1,int num2){
	if(num1>num2)
		return num1;
	else 
		return num2;
}
