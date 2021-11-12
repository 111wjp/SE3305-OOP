#include <iostream>
using namespace std;
int main(){
	int a[3] = {38,25,56};
	for(int j = 0;j < 2;j++){
		if(a[j] > a[j+1]){
			int m;
			m = a[j];
			a[j] = a[j+1];
			a[j+1] = m;
		}
	}
	for(int i = 0;i < 3;i++)
		cout<<a[i]<<endl;
	return 0;
}
