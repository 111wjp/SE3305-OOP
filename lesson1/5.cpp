#include <iostream>
using namespace std;
int add(int a,int b);

int main(){
	int a,b,c;
	cin>>a>>b;
	c = add(a,b);
	cout<<"a + b ="<<c<<endl;
	
	return 0;
}

int add(int a,int b){
	return (a + b);
}
