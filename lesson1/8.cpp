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

int main(){
	int num1,num2;
	cin>>num1>>num2;
	sort(num1,num2);
	cout<<num1<<" "<<num2<<endl;
	return 0;
}
